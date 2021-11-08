//
//  main.cpp
//  6.43 PROJECT: Dice Histogram
//
//  Created by Kenneth Vo on 11/3/21.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int rollDie()
{
    int randVal;
    int dieRoll;
    
    randVal = rand();
    dieRoll = (randVal % 6) + 1; // add 1 so that values are between 1-6
    
    return dieRoll;
}

void initArray(int data[], int size)
{
    int i;
    
    for (i = 0; i < size; ++i) // creates the array for all sums of 2 die rolls
    {
        data[i] = rollDie() + rollDie();
    }

}

void sortArray(int data[], int size)
{
    int tempVal;
    int i;
    
    for (i = 1; i < size; ++i)
    {
        int j = i;
        
        while (data[j] > data[j - 1] && j > 0) // sorts array large to small
        {
            tempVal = data[j - 1];
            data[j - 1] = data[j];
            data[j] = tempVal;
            
            --j;
        }
    }
    
    for (i = 0; i < size; ++i)
    {
        if (data[i] == 7)
        {
            cout << "The first instance of a '7' in the sorted array is : " << i << endl;
            break;
        }
    }
}

void bucketize(const int data[], int size, int buckets[])
{
    for (int i = 0; i < 11; ++i)
    {
        buckets[i] = 0;
    }
    
    for (int i = 0; i < size; ++i) // linear search for bucket amounts
    {
        if (data[i] == 2)
        {
            buckets[0] += 1;
        }
        
        else if (data[i] == 3)
        {
            buckets[1] += 1;
        }
        
        else if (data[i] == 4)
        {
            buckets[2] += 1;
        }
        
        else if (data[i] == 5)
        {
            buckets[3] += 1;
        }
        
        else if (data[i] == 6)
        {
            buckets[4] += 1;
        }
        
        else if (data[i] == 7)
        {
            buckets[5] += 1;
        }
        
        else if (data[i] == 8)
        {
            buckets[6] += 1;
        }
        
        else if (data[i] == 9)
        {
            buckets[7] += 1;
        }
        
        else if (data[i] == 10)
        {
            buckets[8] += 1;
        }

        else if (data[i] == 11)
        {
            buckets[9] += 1;
        }
        
        else if (data[i] == 12)
        {
            buckets[10] += 1;
        }
    }

}

void normalizeBuckets(int buckets[], int norm)
{
    int maxVal = 0;
    
    for (int i = 0; i < 11; ++i) // finding max val
    {
        if (maxVal < buckets[i])
        {
            maxVal = buckets[i];
        }
    }
    
    for (int i = 0; i < 11; ++i) // replaces old bucket with normalized version for display
    {
        buckets[i] = (buckets[i] * norm) / maxVal;
    }
    
}

void displayHistogram(int buckets[])
{
    cout << setw(2) << right << 2 << ":  ";
        for (int i = 0; i < buckets[0]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 3 << ":  ";
        for (int i = 0; i < buckets[1]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 4 << ":  ";
        for (int i = 0; i < buckets[2]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 5 << ":  ";
        for (int i = 0; i < buckets[3]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 6 << ":  ";
        for (int i = 0; i < buckets[4]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 7 << ":  ";
        for (int i = 0; i < buckets[5]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 8 << ":  ";
        for (int i = 0; i < buckets[6]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 9 << ":  ";
        for (int i = 0; i < buckets[7]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 10 << ":  ";
        for (int i = 0; i < buckets[8]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 11 << ":  ";
        for (int i = 0; i < buckets[9]; ++i)
        {
            cout << '*';
        }
        cout << endl;
    
    cout << setw(2) << right << 12 << ":  ";
        for (int i = 0; i < buckets[10]; ++i)
        {
            cout << '*';
        }
        cout << endl;
}

int main()
{
    srand(4);
    
    int arSize;
    int buckets[11] = {};
    int norm = 10;
    
    cout << "Enter the number of rolls : " << endl;
    cin >> arSize;
    
    if (arSize <= 0)
    {
        cout << "The first instance of a '7' in the sorted array is : -1" << endl;
        for (int i = 2; i <= 12; ++i)
        {
            cout << setw(2) << right << i << ":  " << endl;
        }
    }
    
    else
    {
    int array[1000];
    
    initArray(array, arSize);
    sortArray(array, arSize);

    bucketize(array, arSize, buckets);
    normalizeBuckets(buckets, norm);
    displayHistogram(buckets);
    }
        
    return 0;
}
