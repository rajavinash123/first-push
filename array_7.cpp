

// 7.Create 2D array (algo and program)
#include <stdio.h>

int main() {
    int m, n, i, j;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int arr[m][n]; // Declare a 2D array

    // Input the elements of the 2D array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the 2D array
    printf("The 2D array is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
