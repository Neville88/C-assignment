/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*

1. Initialize a variable max to store the maximum value. Set it to the first element of the array.
2. Loop through each element of the array starting from the second element.
3. For each element, compare it with max. If it's greater than max, update max with this element.
4. After the loop ends, max will hold the maximum value in the array.
5. Return or print the value of max
*/

#include <stdio.h>


    int findMax(int arr[], int size)
{
    // Step 1: Initialize max to the first element of the array
    int max = arr[0];

    // Step 2: Loop through each element starting from the second element
    for (int i = 1; i < size; i++)
    {
        // Step 3: Compare each element with max
        if (arr[i] > max)
        {
            // Update max if the current element is greater
            max = arr[i];
        }
    }

    // Step 5: Return the maximum value
    return max;
}

int main()
{
    // Example array
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the maximum element
    int maxElement = findMax(arr, size);

    // Print the maximum element
    printf("The maximum element in the array is: %d\n", maxElement);


    return 0;
}