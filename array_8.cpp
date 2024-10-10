// 8.Program to Addition,multiplication,Transpose Two Matrices.

#include <stdio.h>

void inputMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[10][10], int b[10][10], int result[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int a[10][10], int b[10][10], int result[10][10], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[10][10], int transposed[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int row1, col1, row2, col2;
    int a[10][10], b[10][10], result[10][10], transposed[10][10];

    // Input dimensions of the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);

    // Input dimensions of the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);

    // Ensure matrices can be multiplied
    if (col1 != row2) {
        printf("Matrices cannot be multiplied\n");
        return 0;
    }

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    inputMatrix(a, row1, col1);

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    inputMatrix(b, row2, col2);

    // Perform matrix addition
    if (row1 == row2 && col1 == col2) {
        addMatrices(a, b, result, row1, col1);
        printf("Result of matrix addition:\n");
        printMatrix(result, row1, col1);
    } else {
        printf("Matrices cannot be added\n");
    }

    // Perform matrix multiplication
    multiplyMatrices(a, b, result, row1, col1, col2);
    printf("Result of matrix multiplication:\n");
    printMatrix(result, row1, col2);

    // Perform transpose of the first matrix
    transposeMatrix(a, transposed, row1, col1);
    printf("Transpose of the first matrix:\n");
    printMatrix(transposed, col1, row1);

    // Perform transpose of the second matrix
    transposeMatrix(b, transposed, row2, col2);
    printf("Transpose of the second matrix:\n");
    printMatrix(transposed, col2, row2);

    return 0;
}
