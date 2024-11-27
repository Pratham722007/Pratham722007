#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows1, cols1, rows2, cols2;

    
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible with the given dimensions.\n");
        return 1;
    }

    
    int **matrix1 = (int **)malloc(rows1 * sizeof(int *));
    int **matrix2 = (int **)malloc(rows2 * sizeof(int *));
    int **product = (int **)malloc(rows1 * sizeof(int *));
    for (int i = 0; i < rows1; i++) matrix1[i] = (int *)malloc(cols1 * sizeof(int));
    for (int i = 0; i < rows2; i++) matrix2[i] = (int *)malloc(cols2 * sizeof(int));
    for (int i = 0; i < rows1; i++) product[i] = (int *)malloc(cols2 * sizeof(int));


    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }


    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    
    printf("The product of the two matrices is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < rows1; i++) {
        free(matrix1[i]);
        free(product[i]);
    }
    for (int i = 0; i < rows2; i++) {
        free(matrix2[i]);
    }
    free(matrix1);
    free(matrix2);
    free(product);

    return 0;
}
