//
//  QueueEditAlertController.swift
//  BandiNew
//
//  Created by Siddha Tiwari on 5/8/18.
//  Copyright © 2018 Siddha Tiwari. All rights reserved.
//

import UIKit

class QueueEditAlertController: UIAlertController {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        setup()
    }
    
    func setup() {
        let cancelAction = UIAlertAction(title: "Cancel", style: .cancel, handler: { action in
            print("Alert canceled")
        })
        let newLinkAction = UIAlertAction(title: "New Queue Link", style: .default, handler: { action in
            print("New link requested")
        })
        let shareLinkAction = UIAlertAction(title: "Share Queue Link", style: .default, handler: { action in
            print("New link requested")
        })
        
        addAction(shareLinkAction)
        addAction(newLinkAction)
        addAction(cancelAction)
    }
    
}
