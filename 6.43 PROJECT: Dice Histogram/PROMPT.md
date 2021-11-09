#6.43 PROJECT: Dice Histogram
Rolling a single six-sided die produces a random number between 1 and 6 with a uniform distribution. Rolling two dice produces a number between 2 and 12 with a binomial distribution. In this lab you will simulate a number of dice rolls and graph the number of occurrences of each value.

1) Create a function called rollDie() that takes no parameters, and returns a random value between 1 and 6. Do not seed the random number generator in this function.

```int rollDie()```
2) Create a function called initArray() that takes a data array and the size of the array as parameters and fills each element with the summed results of rolling two dice. Do not assume that the data array has been initialized.
```void initArray(int data[], int size)```
3) Create a function called sortArray() that takes an array and the size of the array as parameters, and sorts the array using the sediment sort.
```void sortArray(int data[], int size)```
The sediment sort works as follows:

    start with the second element in the array
    if the current element is larger than the previous element swap them
        continue to swap the current element with the one before it until it is no longer larger than the previous element or you reach the beginning of the array
    go back to the beginning and process with the third element in the array, then the fourth, and so on until all elements have been processed.

4) Create a function called bucketize() that takes a constant data array, the size of the data array, and an eleven element "bucket" array as parameters. There are eleven possible values that a two-dice roll can have: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12. Each bucket element represents the number of times that value appears in the data array (i.e. if a 2 was rolled 153 times, then the value of the first element in the bucket array would be 153). Do not assume that the bucket array has been initialized.
```void bucketize(const int data[], int size, int buckets[]) ```
5) Create a function called normalizeBuckets() that takes an eleven element "bucket" array and a norm value as parameters. 
```void normalizeBuckets(int buckets[], int norm) ```
This function will normalize the values in the bucket array to values between 0 and norm. The math behind this is simply
```new value = (old value * norm) / (max value) ```
where max value is the largest value in the original bucket array.
6) Create a function called displayHistogram() that takes an eleven element "bucket" array as a parameter.
```void displayHistogram(int buckets[])```
This function will display the data from the normalized bucket array as a histogram, with labels and "stars as bars". For example (yours will not look exactly like this):
``` 2:  ***
 3:  *
 4:  
 5:  *****
 6:  **********
 7:  *******
 8:  *******
 9:  ******
10:  *****
11:  ***
12:  **
```
7) Write a main() function that does the following:

    seeds the random number generator with a value of 4
    prompts the user for the number of two-dice rolls (0 - 1000): Enter the number of rolls:
    generates an array with that number of rolls
    sorts the array and displays the index of the first element with a value of 7: The first instance of a '7' in the sorted array is:
    displays the histogram, normalized to a value of 10 (as above)
