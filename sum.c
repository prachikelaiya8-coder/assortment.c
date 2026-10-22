
#include <stdio.h>

int main()
{
    int a[3][3], i, j, row, col;
    int sum = 0;

    printf("Enter array's elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &row);

    sum = 0;

    printf("Elements of row %d: ", row);

    for(j = 0; j < 3; j++)
    {
        printf("%d ", a[row][j]);
        sum = sum + a[row][j];
    }

    printf("\nThe sum of a row %d: %d\n", row, sum);

    printf("\nEnter column number: ");
    scanf("%d", &col);

    sum = 0;

    printf("Elements of column %d: ", col);

    for(i = 0; i < 3; i++)
    {
        printf("%d ", a[i][col]);
        sum = sum + a[i][col];
    }

    printf("\nThe sum of column %d: %d\n", col, sum);

    return 0;
}