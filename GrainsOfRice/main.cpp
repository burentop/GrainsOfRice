//
//  main.cpp
//  GrainsOfRice
//
//  Created by Brent Perry on 7/9/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    int square_count;
    double current_grains = 1;
    int thou_grains = 1, mil_grains = 1, bil_grains = 1;
    vector<int> past_grains;
    
    cout << "Sqaure 1: " << current_grains << " grains.\n";
    
    for (square_count = 2; square_count <= 64; ++square_count) {
        current_grains *= 2;
        if (current_grains >= 1000000000 && bil_grains == 1) {
            bil_grains = square_count;
        } else if (current_grains >= 1000000 && mil_grains == 1) {
            mil_grains = square_count;
        } else if (current_grains >= 1000 && thou_grains == 1) {
            thou_grains = square_count;
        }
        past_grains.push_back(current_grains);
        cout << "Square " << square_count << ": " << current_grains << " grains.\n";
    }
    
    cout << thou_grains << " squares required to reach 1,000 grains.\n";
    cout << mil_grains << " squares required to reach 1,000,000 grains.\n";
    cout << bil_grains << " squares required to reach 1,000,000,000 grains.\n";
}
