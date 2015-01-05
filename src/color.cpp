//
//  color.cpp
//  CommandLineInterface (CLI)
//
//  Created by Dylan McAllister on 1/14/14.
//  Copyright (c) 2014 Dylan McAllister. All rights reserved.
//

#include "color.h"

Color::Color() {
    
}

int Color::OnExecute() {
    cout << "What's your favorite color?\n";
    cin >> color;
    transform(color.begin(), color.end(), color.begin(), ::tolower);
    if (color == "green") {
        cout << "Good boy.\n";
    } else {
        cout << "No, it's green.\n";
    }
    
    return 0;
}