//
//  HowMuchSolution.cpp
//  CommandLineInterface (CLI)
//
//  Created by Dylan McAllister on 1/15/14.
//  Copyright (c) 2014 Dylan McAllister. All rights reserved.
//

#include "HowMuchSolution.h"

HowMuchSolution::HowMuchSolution() {
    
}

int HowMuchSolution::OnExecute() {
    int pos = 0;
    
    for (int i = 0; i <= maxTShirts; i ++) {
        for (int j = 0; j <= maxSShirts; j++) {
            cost = (i * tShirt_cost) + (j * sShirt_cost);
            revenue = (i * tShirt_sale) + (j * sShirt_sale);
            if (cost <= maxCost && revenue >= minRevenue) {
                cout << "Solution Found: " << "t-shirts: " << i << " sweatshirts: " << j <<
                        "\n";
                pos ++;
                if (cost < bCost && revenue > bRevenue) {
                    bCost = cost;
                    bRevenue = revenue;
                    bTShirts = i;
                    bSShirts = j;
                } else if (cost < cCost) {
                    cCost = cost;
                } else if (revenue > cRevenue) {
                    cRevenue = revenue;
                }
            } else {
                //cout << "nope\n";
            }
        }
    }
    
    cout << pos << "\n";
    cout << "Best Solution: " << "Cost: $" << bCost << " Revenue: $" << bRevenue <<
            " TShirts: " << bTShirts << " Sweatshirts: " << bSShirts << "\n";
    cout << "Lowest Possible Price: $" << cCost << "\n";
    cout << "Highest Possible Revenue: $" << cRevenue << "\n";
    
    return 0;
}