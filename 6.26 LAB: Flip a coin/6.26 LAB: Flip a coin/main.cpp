//
//  main.cpp
//  6.26 LAB: Flip a coin
//
//  Created by Kenneth Vo on 10/27/21.
//

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

string HeadsOrTails() {
    int flip; // random number
    string coin;
    flip = rand();
    
    // determines heads or tails
    if (flip % 2 == 0) {
        coin = "heads";
    }
    
    else if (flip % 2 == 1) {
        coin = "tails";
    }
    
    return coin;
}

int main() {
    unsigned int i;
    int flipAmount;
    string userflip;
    
   srand(2);  // Unique seed

    cin >> flipAmount;
    
    // flip loop
    for (i = 0; i < flipAmount; ++i) {
        userflip = HeadsOrTails();
        cout << userflip << endl;
    }

   return 0;
}
