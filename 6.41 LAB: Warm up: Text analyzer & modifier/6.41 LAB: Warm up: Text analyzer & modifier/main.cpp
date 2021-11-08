//
//  main.cpp
//  6.41 LAB: Warm up: Text analyzer & modifier
//
//  Created by Kenneth Vo on 10/30/21.
//

#include <iostream>
#include <string>
using namespace std;

//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr)
{
    int stringSize;
    
    stringSize = usrStr.size();
    
    return stringSize;
}

string OutputWithoutWhitespace(string withSpace)
{
    int i;
    string tempString;
    string finalString;
    
    for (i = 0; i < withSpace.size(); ++i)
    {
        if (withSpace.at(i) == ' ')
        {
            tempString = withSpace.substr(i + 1, withSpace.size());
            finalString = withSpace.substr(0, i) + tempString;
            
            withSpace = finalString;
        }
        
    }
    
    return finalString;
}

int main()
{
    string input;

    cout << "Enter a sentence or phrase:" << endl;
    cout << endl;
    getline(cin, input);
    
    cout << "You entered: " << input << endl << endl;
    
    cout << "Number of characters: " << GetNumOfCharacters(input) << endl;
    cout << "String with no whitespace: " << OutputWithoutWhitespace(input) << endl;

   return 0;
}
