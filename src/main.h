//
//  main.h
//  CommandLineInterface (CLI)
//
//  Created by Dylan McAllister on 1/14/14.
//  Copyright (c) 2014 Dylan McAllister. All rights reserved.
//

#ifndef CommandLineInterface__CLI__main_h
#define CommandLineInterface__CLI__main_h

#include <math.h>
#include <iostream>
#include <map>
#include <string>

#include "LinTrendLine.h"
#include "color.h"
#include "HowMuchSolution.h"

using namespace std;

class Main {
    private:
        bool running;
        string cmd;
        
    
    public:
        Main();
    
        int OnExecute();
};

#endif
