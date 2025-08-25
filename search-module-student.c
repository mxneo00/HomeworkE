#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "listSearcher.h"

// Function Prototypes
static int findMaxInteger(int list[], int startingIndex, int numbrOfEntries);


// ################################################################
void searchIntegerList(int list[], int nbrOfListEntries, int childrenCount)
{
    for (int i = 0; i < childrenCount; i++){

    }
    
} // End searchIntegerList


// ################################################################
static int findMaxInteger(int list[], int startingIndex, int nbrOfEntries)
{
    // Set intial value for maxInt
    int maxInt = list[startingIndex];

    // Overall for loop to loop through all entries
    for (int i = 1; i < nbrOfEntries; i++){
        // If loop to determine if next value is larger than the maxInt
        if(list[startingIndex +1] > maxInt){
            // If true maxInt is set to the next value 
            maxInt = list[startingIndex + i];
        }
    }
    return maxInt;
} // End findMaxInteger


