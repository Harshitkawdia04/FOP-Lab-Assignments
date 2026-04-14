#include <stdio.h>
#include <math.h>

#define MAX 10

// Function to input matrix
void inputMatrix(int a[MAX][MAX], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int a[MAX][MAX], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// 1. Matrix Addition
void addMatrix(int a[MAX][MAX], int b[MAX][MAX], int r, int c) {
    int sum[MAX][MAX];

    printf("Sum of matrices:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// 2. Saddle Point
void saddlePoint(int a[MAX][MAX], int r, int c) {
    int found = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            int minRow = a[i][j];
            int colIndex = j;

            // check row minimum
            for(int k = 0; k < c; k++) {
                if(a[i][k] < minRow) {
                    minRow = a[i][k];
                    colIndex = k;
                }
            }

            // check column maximum
            int maxCol = a[i][colIndex];
            for(int k = 0; k < r; k++) {
                if(a[k][colIndex] > maxCol) {
                    maxCol = a[k][colIndex];
                }
            }

            if(minRow == maxCol) {
                printf("Saddle point: %d at (%d,%d)\n", minRow, i, colIndex);
                found = 1;
            }
        }
    }

    if(!found)
        printf("No saddle point found.\n");
}

// 3. Inverse of 2x2 matrix
void inverseMatrix(int a[2][2]) {
    int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("Inverse not possible (determinant = 0)\n");
        return;
    }

    printf("Inverse of matrix:\n");
    printf("%.2f %.2f\n",  (float)a[1][1]/det, -(float)a[0][1]/det);
    printf("%.2f %.2f\n", -(float)a[1][0]/det,  (float)a[0][0]/det);
}

// 4. Magic Square (simple check)
void magicSquare(int a[MAX][MAX], int n) {
    int sum = 0, diag1 = 0, diag2 = 0;

    for(int i = 0; i < n; i++) {
        sum += a[0][i];
        diag1 += a[i][i];
        diag2 += a[i][n-i-1];
    }

    if(diag1 == diag2 && diag1 == sum)
        printf("It is a Magic Square\n");
    else
        printf("Not a Magic Square\n");
}

int main() {
    int choice, r, c;
    int a[MAX][MAX], b[MAX][MAX];

    do {
        printf("\n===== MATRIX MENU =====\n");
        printf("1. Addition of matrices\n");
        printf("2. Saddle point\n");
        printf("3. Inverse (2x2 only)\n");
        printf("4. Magic square check\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter rows and columns: ");
                scanf("%d%d", &r, &c);

                printf("Enter matrix A:\n");
                inputMatrix(a, r, c);

                printf("Enter matrix B:\n");
                inputMatrix(b, r, c);

                addMatrix(a, b, r, c);
                break;

            case 2:
                printf("Enter rows and columns: ");
                scanf("%d%d", &r, &c);

                printf("Enter matrix:\n");
                inputMatrix(a, r, c);

                saddlePoint(a, r, c);
                break;

            case 3:
                printf("Enter 2x2 matrix:\n");
                inputMatrix(a, 2, 2);
                inverseMatrix(a);
                break;

            case 4:
                printf("Enter size of square matrix: ");
                scanf("%d", &r);

                printf("Enter matrix:\n");
                inputMatrix(a, r, r);

                magicSquare(a, r);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}
