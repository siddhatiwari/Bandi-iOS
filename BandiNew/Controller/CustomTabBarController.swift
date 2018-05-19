//
//  CustomTabBarController.swift
//  BandiNew
//
//  Created by Siddha Tiwari on 4/28/18.
//  Copyright © 2018 Siddha Tiwari. All rights reserved.
//

import UIKit
import AVFoundation
import LNPopupController

class CustomTabBarController: UITabBarController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let libraryTabController = CustomNavigationController(rootViewController: LibraryTabController())
        let searchTabController = CustomNavigationController(rootViewController: SearchTabController())
        let queueTabController = CustomNavigationController(rootViewController: QueueTabController())
        
        let vcData: [(vc: UIViewController, title: String)] = [
            (libraryTabController, "Library"),
            (searchTabController, "Search"),
            (queueTabController, "Queue"),
        ]
        
        var tabViewControllers: [UIViewController] = []
        for item in vcData {
            //item.vc.tabBarItem.image = item.image.withRenderingMode(.alwaysTemplate)
            item.vc.tabBarItem.title = item.title
            item.vc.tabBarItem.imageInsets = UIEdgeInsets(top: 2, left: -3, bottom: -2, right: -3)
            tabViewControllers.append(item.vc)
        }
        
        tabBar.layer.borderWidth = 0
        //tabBar.clipsToBounds = true
        
        viewControllers = tabViewControllers
        selectedIndex = 1
        
        setupViews()
        setUpTheming()
    }
    
    lazy var musicDetailsController: MusicDetailsController = {
        let yp = MusicDetailsController()
        return yp
    }()
    
    func setupViews() {
        popupInteractionStyle = .drag
        popupBar.barStyle = .custom
        popupContentView.popupCloseButtonStyle = .chevron
        popupBar.isTranslucent = false
        popupBar.marqueeScrollEnabled = true
        popupBar.progressViewStyle = .default
    }
    
}

extension CustomTabBarController: Themed {
    func applyTheme(_ theme: AppTheme) {
        tabBar.barTintColor = theme.barBackgroundColor
        tabBar.tintColor = theme.tintColor
        tabBar.unselectedItemTintColor = theme.barUnselectedTextColor
        popupBar.backgroundColor = .blue//theme.popupBarColor.withAlphaComponent(0.98)
        popupBar.tintColor = theme.tintColor
        LNPopupBar.appearance(whenContainedInInstancesOf: [UIViewController.self]).titleTextAttributes = [.font: UIFont.systemFont(ofSize: 18) as Any, .foregroundColor: theme.textColor]
        LNPopupBar.appearance(whenContainedInInstancesOf: [UIViewController.self]).subtitleTextAttributes = [.font: UIFont.systemFont(ofSize: 13) as Any, .foregroundColor: theme.subTextColor]
    }
}
