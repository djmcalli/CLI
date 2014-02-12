//
//  main.cpp
//  CommandLineInterface (CLI)
//
//  Created by Dylan McAllister on 1/14/14.
//  Copyright (c) 2014 Dylan McAllister. All rights reserved.
//

#include "main.h"

Main::Main() {
    
}

int Main::OnExecute() {
    map<std::string, int> commands = {
        {"help", 0},
        {"h", 0},
        
        {"trendline", 1},
        {"t", 1},
        
        {"color", 2},
        {"c", 2},
        
        {"howmuchsol", 3},
        {"hms", 3},
        
        {"jatzsol", 4},
        
        {"quit", 5},
        {"exit", 5},
        {"q", 5}
    };
    
    running = true;
    
    cout << "Welcome to the Command-Line Interface (CLI)!\n" <<
            "Say 'help' for help!\n";
    
    while (running) {
        cmd = "";
        cout << "~cli: ";
        cin >> cmd;
        
        map<string, int>::iterator it = commands.find(cmd);
        
        if (it != commands.end()) {
            switch (commands.at(cmd)) {
                case 0: {
                    cout << "Command List:\n" <<
                        "    color, c - What's your favorite color?\n" <<
                        "    trendline, t - Linear Trendline Calculator\n" <<
                        "    help, h - list available commands\n" <<
                        "    quit, q - quit CLI\n";
                
                    break;
                }
                
                case 1: {
                    LinTrendLine lin;
                    lin.OnExecute();
                
                    break;
                }
                
                case 2: {
                    Color col;
                    col.OnExecute();
                
                    break;
                }
                
                case 3: {
                    HowMuchSolution hms;
                    hms.OnExecute();
                
                    break;
                }
            
                case 4: {
                    cout << (int)(6 * pow(5, 3) * 2) << "\n";
                
                    break;
                }
            
                case 5: {
                    running = false;
                
                    break;
                }
                
                default:
                    cout << cmd << ": Command Not Recongized!\n";
            }
        } else {
            cout << cmd << ": Command Not Recognized!\n";
        }
    }
    
    return 0;
}

int main(int, char const**)
{
    Main main;
    
    return main.OnExecute();
}
