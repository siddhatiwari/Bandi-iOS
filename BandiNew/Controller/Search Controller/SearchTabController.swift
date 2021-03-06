//
//  SearchTabController.swift
//  BandiNew
//
//  Created by Siddha Tiwari on 4/28/18.
//  Copyright © 2018 Siddha Tiwari. All rights reserved.
//

import UIKit
import CoreData

class SearchTabController: UIViewController, UISearchControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        if let navBar = navigationController {
            navBar.navigationBar.prefersLargeTitles = true
            navBar.extendedLayoutIncludesOpaqueBars = true
        }
        definesPresentationContext = true
        
        navigationItem.hidesSearchBarWhenScrolling = false
        navigationItem.searchController = searchController
        
        NotificationCenter.default.addObserver(self, selector: #selector(keyboardWillShow), name: NSNotification.Name.UIKeyboardWillShow, object: nil)
        NotificationCenter.default.addObserver(self, selector: #selector(keyboardWillHide), name: NSNotification.Name.UIKeyboardWillHide, object: nil)
        
        title = "Search"
        setupViews()
    }
    
    override var preferredStatusBarStyle: UIStatusBarStyle {
        return AppThemeProvider.shared.currentTheme.statusBarStyle
    }
    
    var searchCancelled = false
    var previousSearch = ""
    
    lazy var searchController: SearchController = {
        let sb = SearchController(searchResultsController: nil)
        sb.delegate = self
        sb.searchBar.delegate = self
        sb.searchResultsUpdater = self
        sb.obscuresBackgroundDuringPresentation = true
        sb.hidesNavigationBarDuringPresentation = true
        sb.searchBar.placeholder = "Search Youtube"
        sb.dimsBackgroundDuringPresentation = true
        return sb
    }()
    
    lazy var musicTableView: SearchMusicTableView = {
        let tv = SearchMusicTableView(frame: .zero, style: .grouped)
        tv.handleMusicTapped = { song in
            self.searchController.searchBar.endEditing(true)
        }
        tv.handleScroll = { isUp in
            self.searchController.searchBar.endEditing(true)
        }
        tv.bottomReached = {
            DispatchQueue.global(qos: .userInitiated).async {
                MusicFetcher.shared.fetchYoutubeNextPage(handler: { (youtubeVideos) -> Void in
                    if let youtubeVideos = youtubeVideos {
                        let filteredVideos = youtubeVideos.filter({ song in
                            return !self.musicTableView.musicArray.contains(song)
                        })
                        self.musicTableView.musicArray = self.musicTableView.musicArray + filteredVideos
                        DispatchQueue.main.async {
                            self.musicTableView.reloadData()
                        }
                    }
                })
            }
        }
        tv.translatesAutoresizingMaskIntoConstraints = false
        return tv
    }()
    
    lazy var suggestionsTableView: SearchSuggestionsTableView = {
        let tv = SearchSuggestionsTableView(frame: .zero)
        tv.isHidden = true
        tv.suggestionSelected = { suggestion in
            self.searchController.searchBar.text = suggestion
            self.searchController.searchBar.endEditing(true)
            self.updateSearchResults()
        }
        tv.translatesAutoresizingMaskIntoConstraints = false
        return tv
    }()
    
    lazy var recentSearchesTableView: RecentSearchesTableView = {
        let tv = RecentSearchesTableView(frame: .zero, style: .grouped)
        tv.rowSelected = { searchString in
            self.searchController.searchBar.text = searchString
            self.updateSearchResults()
            self.suggestionsTableView.isHidden = true
            tv.isHidden = true
        }
        tv.translatesAutoresizingMaskIntoConstraints = false
        return tv
    }()
    
    func setupViews() {
        view.addSubview(musicTableView)
        view.addSubview(recentSearchesTableView)
        view.addSubview(suggestionsTableView)
        
        NSLayoutConstraint.activate([
            recentSearchesTableView.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor),
            recentSearchesTableView.bottomAnchor.constraint(equalTo: view.safeAreaLayoutGuide.bottomAnchor),
            recentSearchesTableView.leadingAnchor.constraint(equalTo: view.leadingAnchor),
            recentSearchesTableView.trailingAnchor.constraint(equalTo: view.trailingAnchor),
            
            suggestionsTableView.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor),
            suggestionsTableView.bottomAnchor.constraint(equalTo: view.safeAreaLayoutGuide.bottomAnchor),
            suggestionsTableView.leadingAnchor.constraint(equalTo: view.leadingAnchor),
            suggestionsTableView.trailingAnchor.constraint(equalTo: view.trailingAnchor),
            
            musicTableView.topAnchor.constraint(equalTo: view.safeAreaLayoutGuide.topAnchor),
            musicTableView.bottomAnchor.constraint(equalTo: view.safeAreaLayoutGuide.bottomAnchor),
            musicTableView.leadingAnchor.constraint(equalTo: view.leadingAnchor),
            musicTableView.trailingAnchor.constraint(equalTo: view.trailingAnchor)
            ])
    }
    
    func updateSearchResults(for searchController: UISearchController) {
        updateSearchSuggestions()
        if !searchCancelled {
            suggestionsTableView.isHidden = false
            recentSearchesTableView.isHidden = true
        } else {
            recentSearchesTableView.isHidden = false
            suggestionsTableView.isHidden = true
            searchCancelled = false
        }
    }
    
    func searchBarCancelButtonClicked(_ searchBar: UISearchBar) {
        DispatchQueue.main.async {
            self.recentSearchesTableView.reloadData()
        }
        searchCancelled = true
    }
    
    @objc func keyboardWillShow(notification: NSNotification) {
        if let keyboardSize = (notification.userInfo?[UIKeyboardFrameBeginUserInfoKey] as? NSValue)?.cgRectValue {
            suggestionsTableView.contentInset.bottom = keyboardSize.height
        }
    }
    
    @objc func keyboardWillHide(notification: NSNotification) {
        suggestionsTableView.contentInset.bottom = 0
    }
    
    func searchBarTextDidEndEditing(_ searchBar: UISearchBar) {
        suggestionsTableView.isHidden = true
        suggestionsTableView.suggestions.removeAll()
        suggestionsTableView.reloadData()
    }
    
    func searchBarSearchButtonClicked(_ searchBar: UISearchBar) {
        updateSearchResults()
    }
    
    func updateSearchSuggestions() {
        let searchBarText = self.searchController.searchBar.text!
        if !searchBarText.isEmpty {
            DispatchQueue.global(qos: .userInitiated).async {
                MusicFetcher.shared.fetchYoutubeAutocomplete(searchQuery: searchBarText, handler: { suggestions in
                    self.suggestionsTableView.suggestions = suggestions
                    DispatchQueue.main.async {
                        self.suggestionsTableView.reloadData()
                    }
                })
            }
        }
    }
    
    @objc func updateSearchResults() {
        let searchBarText = self.searchController.searchBar.text!
        guard previousSearch != searchBarText else { return }
        previousSearch = searchBarText
        
        DispatchQueue.global(qos: .userInitiated).async {
            MusicFetcher.shared.fetchYoutube(keywords: searchBarText) { (youtubeVideos) -> Void in
                if let youtubeVideos = youtubeVideos {
                    self.musicTableView.musicArray = youtubeVideos
                    DispatchQueue.main.async {
                        self.musicTableView.setContentOffset(.zero, animated: false)
                        self.musicTableView.reloadData()
                    }
                }
            }
        }
    }
    
}
