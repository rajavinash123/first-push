// Program and algo to Find the Maximum and Minimum Element in an Array.




#include <stdio.h>

int main() {
    int n, i, max, min;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    // Input the array elements
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element of the array
    max = min = arr[0];

    // Iterate through the array to find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum elements
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
