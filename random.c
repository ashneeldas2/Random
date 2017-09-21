#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // seed 
    int orig[10];
    int i;
    for (i = 0; i < 10; i++)  // populate the original array
        orig[i] = rand();
    orig[9] = 0; // set last element to 0
    for (i = 0; i < 10; i++) // printing
        printf("orig[%d]: %d\n", i, orig[i]);
    int reversed[10];
    for (i = 0; i < 10; i++) { 
        *(reversed + i) = *(&orig[9-i]); // using de-reference operator to set value
        printf("reversed[%d]: %d\n", i, reversed[i]);
    }
    
}