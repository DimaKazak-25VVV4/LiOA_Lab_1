#include <stdio.h>
#include <string.h>

struct student
{
    char famil[20];
    char name[20];
    char facult[20];
    int Nomzach;
};

int main()
{
    struct student stud[3];
    int i;
    char search_famil[20];
    int found = 0;

    for (i = 0; i < 3; i++)
    {
        printf("\nStudent %d \n", i + 1);

        printf("Vvedite familiyu: ");
        scanf("%19s", stud[i].famil);

        printf("Vvedite imya: ");
        scanf("%19s", stud[i].name);

        printf("Vvedite fakultet: ");
        scanf("%19s", stud[i].facult);

        printf("Vvedite nomer zachetnoy knizhki: ");
        scanf("%d", &stud[i].Nomzach);
    }

    printf("\nSpisok vseh studentov\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s %s, fakultet: %s, zachetka: %d\n",
               stud[i].famil, stud[i].name,
               stud[i].facult, stud[i].Nomzach);
    }

    printf("\nVvedite familiyu dlya poiska: ");
    scanf("%19s", search_famil);

    printf("\nRezultaty poiska \n");
    for (i = 0; i < 3; i++)
    {
        if (strcmp(stud[i].famil, search_famil) == 0)
        {
            printf("Nayden: %s %s, fakultet: %s, zachetka: %d\n",
                   stud[i].famil, stud[i].name,
                   stud[i].facult, stud[i].Nomzach);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Student s familiyei '%s' ne nayden.\n", search_famil);
    }

    return 0;
}
