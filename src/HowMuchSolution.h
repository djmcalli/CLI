//
//  HowMuchSolution.h
//  CommandLineInterface (CLI)
//
//  Created by Dylan McAllister on 1/15/14.
//  Copyright (c) 2014 Dylan McAllister. All rights reserved.
//

#ifndef __CommandLineInterface__CLI___HowMuchSolution__
#define __CommandLineInterface__CLI___HowMuchSolution__

#include <iostream>
using namespace std;

class HowMuchSolution {
    private:
        // Constant vars
        const int maxCost = 2500;
        const int minRevenue = 4200;
    
        const int tShirt_cost = 5, tShirt_sale = 8;
        const int sShirt_cost = 7, sShirt_sale = 12;
    
        const int maxTShirts = 500, maxSShirts = 500;
    
    private:
        //Runtime vars
        int revenue;
        int cost;
    
        int bRevenue = 4200, bCost = 2500,
            cRevenue = 4200, cCost = 2500,
            bTShirts, bSShirts;
    
    
    public:
        // Control vars
    
        HowMuchSolution();
    
        int OnExecute();
};

#endif /* defined(__CommandLineInterface__CLI___HowMuchSolution__) */
