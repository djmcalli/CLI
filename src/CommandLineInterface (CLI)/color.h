//
//  color.h
//  CommandLineInterface (CLI)
//
//  Created by Dylan McAllister on 1/14/14.
//  Copyright (c) 2014 Dylan McAllister. All rights reserved.
//

#ifndef __CommandLineInterface__CLI___color__
#define __CommandLineInterface__CLI___color__

#include <iostream>
using namespace std;

class Color {
    private:
        string color;
    
    public:
        Color();
    
        int OnExecute();
};

#endif /* defined(__CommandLineInterface__CLI___color__) */
