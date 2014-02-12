//
//  LinTrendLine.h
//  CommandLineInterface (CLI)
//
//  Created by Dylan McAllister on 1/14/14.
//  Copyright (c) 2014 Dylan McAllister. All rights reserved.
//

#ifndef __CommandLineInterface__CLI___LinTrendLine__
#define __CommandLineInterface__CLI___LinTrendLine__

#include <iostream>
using namespace std;

class LinTrendLine {
    private:
        // Overhead vars
        bool again;
        string done;
    
    private:
        // Vars used during runtime
    
        double x, y;
    
        double slope,
            slopeA = 0.0,
            slopeB = 0.0, slopeB_totX = 0.0, slopeB_totY = 0.0,
            slopeC = 0.0,
            slopeD = 0.0;
    
        double intercept,
            interceptA = 0.0, interceptB = 0.0, interceptC = 0.0;
    
        double coords[255][2];
        int lastBooked;
        bool bookedInit;
    
    public:
        // Control vars
    
        LinTrendLine();
    
        int OnExecute();
};

#endif /* defined(__CommandLineInterface__CLI___LinTrendLine__) */
