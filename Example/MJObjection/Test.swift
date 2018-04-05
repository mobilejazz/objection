//
//  Test.swift
//  MJObjection_Example
//
//  Created by Joan Martin on 05/04/2018.
//  Copyright © 2018 Joan Martin. All rights reserved.
//

import Foundation
import MJObjection

func foo() {
    
    // Default way of accessing Objection from Swift
    _ = JSObjection.defaultInjector().getObject(String.self, named: "asdf") as! String
    
    // Custom interface to access Objection
    _ = Objection.inject(String.self, named: "asdf")
    
}
