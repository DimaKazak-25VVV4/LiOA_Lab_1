#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char famil[20];
    char name[20];
    char facult[20];
    int Nomzach;
};

int main(void)
{
    struct student *stud = NULL;
    int count;
    int i;
    char search_famil[20];
    int found = 0;

    printf("Vvedite kolichestvo studentov: ");
    scanf("%d", &count);


    stud = malloc(count * sizeof(struct student));


    for (i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Vvedite familiyu: ");
        scanf("%19s", stud[i].famil);

        printf("Vvedite imya: ");
        scanf("%19s", stud[i].name);

        printf("Vvedite fakultet: ");
        scanf("%19s", stud[i].facult);

        printf("Vvedite nomer zachetnoy knizhki: ");
        scanf("%d", &stud[i].Nomzach);
    }

    printf("\nSpisok vseh studentov:\n");

    for (i = 0; i < count; i++)
    {
        printf("%s %s, fakultet: %s, zachetka: %d\n",
               stud[i].famil,
               stud[i].name,
               stud[i].facult,
               stud[i].Nomzach);
    }

    printf("\nVvedite familiyu ili ee chast dlya poiska: ");
    scanf("%19s", search_famil);

    printf("\nRezultaty poiska:\n");

    for (i = 0; i < count; i++)
    {
        if (strstr(stud[i].famil, search_famil) != NULL)
        {
            printf("Nayden: %s %s, fakultet: %s, zachetka: %d\n",
                   stud[i].famil,
                   stud[i].name,
                   stud[i].facult,
                   stud[i].Nomzach);

            found = 1;
        }
    }

    if (!found)
    {
        printf("Studentov s podobnoy familiei ne naydeno.\n");
    }

    free(stud);

    return 0;
}
