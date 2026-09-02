#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 10;
    int a[10];
    int i;

    srand((unsigned int)time(NULL));

    printf("Massiv sluchaynih chisel: ");
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
