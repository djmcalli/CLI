//
//  LinTrendLine.cpp
//  CommandLineInterface (CLI)
//
//  Created by Dylan McAllister on 1/14/14.
//  Copyright (c) 2014 Dylan McAllister. All rights reserved.
//

#include "LinTrendLine.h"

LinTrendLine::LinTrendLine() {
    
}

int LinTrendLine::OnExecute() {
    again = true;
    
    bookedInit = false;
    
    cout << "Welcome to the calculator!\n";
    
    while (again == true) {
        x = 0;
        y = 0;
        cout << "\nWhat is the X of the point?\n";
        cin >> x;
        cout << "\nWhat is the Y of the point?\n";
        cin >> y;
        // Has the array been given its first value (coord) yet?
        if (bookedInit == true) {
            lastBooked ++;
            
            // Insert the new coordinate point into the array.
            coords[lastBooked][0] = x;
            coords[lastBooked][1] = y;
        } else {
            coords[0][0] = x;
            coords[0][1] = y;
            
            // Index of array start at 0, and we use less than or equal to logic in our for loops.
            lastBooked = 0;
            bookedInit = true;
        }
        
        cout << "\nIs that all?\n";
        cin >> done;
        if (done == "yes" || done == "Yes" || done == "1") {
            again = false;
            
            for (int i = 0; i <= lastBooked; i ++) {
                slopeA += (coords[i][0] * coords[i][1]);
                slopeC += (coords[i][0] * coords[i][0]);
                slopeD += coords[i][0];
                interceptA += coords[i][1];
                interceptC += coords[i][0];
                
                slopeB_totX += coords[i][0];
                slopeB_totY += coords[i][1];
            }
            
            slopeA *= lastBooked + 1;
            slopeB = slopeB_totX * slopeB_totY;
            slopeC *= lastBooked + 1;
            slopeD *= slopeD;
            
            // Find the slope by the average of all dy / dx of all points.
            slope = (slopeA - slopeB) / (slopeC - slopeD);
            
            interceptB = slope * interceptC;
            
            intercept = (interceptA - interceptB) / (lastBooked + 1);
            
            cout << "Slope: " <<
            slope << "\n";
            cout << "Intercept: " << intercept << "\n";
            cout << "Equation: y = " << slope << "x + " << intercept
            << "\n";
        }
    }
    
    return 0;
}