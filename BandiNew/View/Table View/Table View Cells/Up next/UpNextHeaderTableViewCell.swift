//
//  UpNextHeaderTableViewCell.swift
//  BandiNew
//
//  Created by Siddha Tiwari on 5/9/18.
//  Copyright © 2018 Siddha Tiwari. All rights reserved.
//

import UIKit

class UpNextHeaderTableViewCell: UITableViewCell {
    
    override init(style: UITableViewCellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        setupViews()
        setUpTheming()
    }
    
    var scrollDownTapped: (()->())?
    
    let upNextLabel: UILabel = {
        let label = UILabel()
        label.text = "Up Next"
        label.font = UIFont.boldSystemFont(ofSize: 20)
        label.translatesAutoresizingMaskIntoConstraints = false
        return label
    }()
    
    let scrollDownButton: UIButton = {
        let button = UIButton()
        button.setImage(#imageLiteral(resourceName: "downtriangle-100").withRenderingMode(.alwaysTemplate), for: .normal)
        button.imageView?.contentMode = .scaleAspectFit
        button.translatesAutoresizingMaskIntoConstraints = false
        return button
    }()
    
    let shuffleButton: PlaylistControlButton = {
        let button = PlaylistControlButton(frame: .zero, title: "Shuffle", image: #imageLiteral(resourceName: "shuffle-96"))
        button.translatesAutoresizingMaskIntoConstraints = false
        return button
    }()
    
    let repeatButton: PlaylistControlButton = {
        let button = PlaylistControlButton(frame: .zero, title: "Repeat", image: #imageLiteral(resourceName: "repeat-96"))
        button.translatesAutoresizingMaskIntoConstraints = false
        return button
    }()
    
    func setupViews() {
        contentView.addSubview(upNextLabel)
        contentView.addSubview(scrollDownButton)
        contentView.addSubview(shuffleButton)
        contentView.addSubview(repeatButton)
        
        NSLayoutConstraint.activate([
            upNextLabel.leadingAnchor.constraint(equalTo: contentView.leadingAnchor, constant: 15),
            upNextLabel.topAnchor.constraint(equalTo: contentView.topAnchor, constant: 5),
            
            scrollDownButton.heightAnchor.constraint(equalToConstant: 20),
            scrollDownButton.widthAnchor.constraint(equalToConstant: 20),
            scrollDownButton.trailingAnchor.constraint(equalTo: contentView.trailingAnchor, constant: -15),
            scrollDownButton.topAnchor.constraint(equalTo: contentView.topAnchor, constant: 7),
            
            shuffleButton.heightAnchor.constraint(equalToConstant: 50),
            shuffleButton.topAnchor.constraint(equalTo: upNextLabel.bottomAnchor, constant: 10),
            shuffleButton.leadingAnchor.constraint(equalTo: contentView.leadingAnchor, constant: 15),
            shuffleButton.trailingAnchor.constraint(equalTo: contentView.centerXAnchor, constant: -10),
            
            repeatButton.heightAnchor.constraint(equalToConstant: 50),
            repeatButton.topAnchor.constraint(equalTo: upNextLabel.bottomAnchor, constant: 10),
            repeatButton.leadingAnchor.constraint(equalTo: contentView.centerXAnchor, constant: 10),
            repeatButton.trailingAnchor.constraint(equalTo: contentView.trailingAnchor, constant: -15),
            ])
        
        scrollDownButton.addTarget(self, action: #selector(scrollDownTap), for: .touchUpInside)
    }
    
    @objc func scrollDownTap() {
        scrollDownTapped?()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
}

extension UpNextHeaderTableViewCell: Themed {
    func applyTheme(_ theme: AppTheme) {
        upNextLabel.textColor = theme.textColor
        scrollDownButton.tintColor = theme.textColor
    }
}
