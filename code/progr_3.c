#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i;
    int *a;

    srand((unsigned int)time(NULL));

    printf("Razmer: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    return 0;
}
