in a given array using recursion */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function to return sum of elements
// in an array of size n
int sum(int arr[], int n)
{
    // base case
    if (n == 0) {
        return 0;
    }
    else {
        // recursively calling the function
        return arr[0] + sum(arr + 1, n - 1);
    }
}

int main()
{
    int arr[] = { 12, 3, 4, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", sum(arr, n));

    return 0;
}
