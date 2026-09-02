#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 10;
    int a[10];
    int i;
    int max, min;

    srand((unsigned int)time(NULL));

    printf("Massiv: ");
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\n");

    max = a[0];
    min = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Maksimum: %d\n", max);
    printf("Minimum:  %d\n", min);
    printf("Raznica (max - min): %d\n", max - min);

    return 0;
}
