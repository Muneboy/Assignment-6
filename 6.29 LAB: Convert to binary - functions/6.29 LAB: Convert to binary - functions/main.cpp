//
//  main.cpp
//  6.29 LAB: Convert to binary - functions
//
//  Created by Kenneth Vo on 10/28/21.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


string ReverseString(string userString)
{
    int i;
    string revString;
    
    for (i = userString.size() - 1; i >= 0; --i) // reverse string
    {
        revString.push_back(userString[i]);
    }
    
    return revString; // return back to IntegerToReverseBinary function
}

string IntegerToReverseBinary(int integerValue)
{
 int binOut; // binary value out
 string fullBinVal;
 
 binOut = integerValue % 2;
 integerValue /= 2;
 
 if (binOut == 0) // to establish initial value for the output
 {
     fullBinVal = "0";
 }
 
 else if (binOut == 1)
 {
     fullBinVal = "1";
 }
 
 while (integerValue != 0) // after initial binary value is established append rest of string
 {
     
     binOut = integerValue % 2;
     integerValue /= 2;
     
     if (binOut == 0)
     {
         fullBinVal.push_back('0');
     }
     
     else if (binOut == 1)
     {
         fullBinVal.push_back('1');
     }
     
 }
    
    return fullBinVal;
}

int main()
{
    int input;
    string binVal;
    string revBin;
    
    
    cin >> input;
    
    binVal = IntegerToReverseBinary(input);
    revBin = ReverseString(binVal);
    
    cout << revBin << endl;
    
    return 0;
}
