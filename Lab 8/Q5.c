#include <stdio.h>

void printArray(int array[4][4]) {
    printf("\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" %d\t", array[i][j]);
        }
        printf("\n");
    }
}

void sortColumns(int array[4][4]) {
    for (int col = 0; col < 4; col++) {
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (array[i][col] > array[j][col]) {
                    int temp = array[i][col];
                    array[i][col] = array[j][col];
                    array[j][col] = temp;
                }
            }
        }
    }
}

int main() {
    int array[4][4];


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter column %d row %d: ", i + 1, j + 1);
            scanf("%d", &array[j][i]);
        }
    }

    printf("\nBefore sorting columns:\n");
    printArray(array);

    sortColumns(array);

    printf("\nAfter sorting columns:\n");
    printArray(array);

    return 0;
}
