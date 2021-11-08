//
//  main.cpp
//  6.42 LAB*: Program: Authoring assistant
//
//  Created by Kenneth Vo on 10/30/21.
//

#include <iostream>
#include <string>
using namespace std;

int GetNumOfNonWSCharacters(string userText)
{
    int charTotalNum = 0;
    
    for (int i = 0; i < userText.size(); ++i)
    {
        if (userText.at(i) != ' ')
        {
            charTotalNum += 1;
        }
    }
    
    return charTotalNum;
}

int GetNumOfWords(const string userText)
{
    int wordTotal = 0;
    
    for (int i = 0; i < userText.size(); ++i)
    {
        if (isspace(userText.at(i)))
        {
            while (isspace(userText.at(i)))
                ++i;
                --i;
                
            ++wordTotal;
            
        }
            

    }
    
    ++wordTotal;
    
    return wordTotal;
}

/*int FindText(string findText, string userText)
{
    int count = 0;
    
    if (userText.size() == 0)
    {
        return 0;
    }
    
    
}*/

void ExecuteMenu(char userInput, string userText)
{
    string textFound;
    
    while (userInput != 'q') {
        switch (userInput) {
            case 'c':
                cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(userText) << endl;
                cin >> userInput;
                break;
                
            case 'w':
                cout << "Number of words: " << GetNumOfWords(userText) << endl;
                cin >> userInput;
                break;
                
            case 'f':
                cout << "Enter a word or phrase to be found:" << endl;
                cin >> textFound;
                /*cout << textFound << " instances: " << FindText(textFound, userText) << endl;*/
                
            default:
                cout << endl << "Choose an option:" << endl;
                cin >> userInput;
                
                break;
        }
    }
}

void PrintMenu()
{
    cout << "MENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
}

int main()
{
    string userText;
    char userMenuInput;
    
    cout << "Enter a sample text:" << endl;
    getline(cin, userText);
    
    cout << endl;
    cout << "You entered: " << userText << endl;
    cout << endl;
    
    
    PrintMenu();
    cout << endl << "Choose an option:" << endl;
    cin >> userMenuInput;
    
    ExecuteMenu(userMenuInput, userText);

   return 0;
}
