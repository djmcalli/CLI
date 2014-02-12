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
    running = true;
    
    cout << "Welcome to the Command-Line Interface (CLI)!\n" <<
            "Say 'help' for help!\n";
    
    while (running) {
        cmd = "";
        cout << "~cli: ";
        cin >> cmd;
        
        if (cmd == "help" || cmd == "h") {
            cout << "Command List:\n" <<
                    "    color, c - What's your favorite color?\n" <<
                    "    trendline, t - Linear Trendline Calculator\n" <<
                    "    help, h - list available commands\n" <<
                    "    quit, q - quit CLI\n";
        } else if (cmd == "trendline" || cmd == "t") {
            LinTrendLine lin;
            lin.OnExecute();
        } else if (cmd == "color" || cmd == "c") {
            Color col;
            col.OnExecute();
        } else if (cmd == "howmuchsol" || cmd == "hms") {
            HowMuchSolution hms;
            hms.OnExecute();
        } else if (cmd == "jatzsol") {
            cout << (int)(6 * pow(5, 3) * 2) << "\n";
        } else if (cmd == "quit" || cmd == "" || cmd == "q") {
            running = false;
        } else {
            cout << cmd << ": Command Not Recongized!\n";
        }
    }
    
    return 0;
}

int main(int, char const**)
{
    Main main;
    
    return main.OnExecute();
}
