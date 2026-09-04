#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rows = 3, cols = 4;
    int a[3][4];
    int i, j;

    srand((unsigned int)time(NULL));

    printf("massiv (%dx%d):\n", rows, cols);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            a[i][j] = rand() % 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSumma po stolbtsam:\n");
    for (j = 0; j < cols; j++)
    {
        int sum = 0;
        for (i = 0; i < rows; i++)
        {
            sum += a[i][j];
        }
        printf("Stolbets %d: %d\n", j + 1, sum);
    }

    printf("\nSumma po strokam:\n");
    for (i = 0; i < rows; i++)
    {
        int sum = 0;
        for (j = 0; j < cols; j++)
        {
            sum += a[i][j];
        }
        printf("Stroka %d: %d\n", i + 1, sum);
    }

    return 0;
}
