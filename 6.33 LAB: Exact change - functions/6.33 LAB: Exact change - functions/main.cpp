//
//  main.cpp
//  6.33 LAB: Exact change - functions
//
//  Created by Kenneth Vo on 10/30/21.
//

#include <iostream>
#include <vector>
using namespace std;

void ExactChange(int userTotal, vector<int>& coinVals) {
    
    // no change output
     if (userTotal == 0)
     {
         cout << "no change" << endl;
     }
    
    // calculating the cent amounts in the vector
    coinVals.at(0) = userTotal / 100; // dollars
    userTotal %= 100;
    
    coinVals.at(1) = userTotal / 25; // quarters
    userTotal = userTotal - (coinVals.at(1) * 25);
    
    coinVals.at(2) = userTotal / 10; // dimes
    userTotal = userTotal - (coinVals.at(2) * 10);
    
    coinVals.at(3) = userTotal / 5; // nickels
    userTotal = userTotal - (coinVals.at(3) * 5);
    
    coinVals.at(4) = userTotal; // pennies
    
    // outputting values
    if (coinVals.at(0) == 1) // dollars
    {
        cout << coinVals.at(0) << " dollar" << endl;
    }
    else if (coinVals.at(0) > 1)
    {
        cout << coinVals.at(0) << " dollars" << endl;
    }
    
    if (coinVals.at(1) == 1) // quarters
    {
        cout << coinVals.at(1) << " quarter" << endl;
    }
    else if (coinVals.at(1) > 1)
    {
        cout << coinVals.at(1) << " quarters" << endl;
    }
    
    if (coinVals.at(2) == 1) // dimes
    {
        cout << coinVals.at(2) << " dime" << endl;
    }
    else if (coinVals.at(2) > 1)
    {
        cout << coinVals.at(2) << " dimes" << endl;
    }
    
    if (coinVals.at(3) == 1) // nickels
    {
        cout << coinVals.at(3) << " nickel" << endl;
    }
    else if (coinVals.at(3) > 1)
    {
        cout << coinVals.at(3) << " nickels" << endl;
    }
    
    if (coinVals.at(4) == 1) // pennies
    {
        cout << coinVals.at(4) << " penny" << endl;
    }
    else if (coinVals.at(4) > 1)
    {
        cout << coinVals.at(4) << " pennies" << endl;
    }
}

int main() {
   int inputVal;
   vector<int> changeAmount(5);
   
    cin >> inputVal;
    
    ExactChange(inputVal, changeAmount);
    
   return 0;
}
