#include <stdio.h>
#include <string.h>
int main()
{
    int index = 0;
    int inside = 0;
    FILE *ptr1 = NULL;
    char string[40];
    char string1[200];
    int p = 0;
    ptr1 = fopen("billtemplate.txt", "r");
    for (int i = 0; i < 24; i++)
    {
        fscanf(ptr1, "%s", string);
        // printf("%s", string);
        // printf(" ");
        strcat(string1, string);
        strcpy(string, " ");
        strcat(string1, string);
    }
    // printf("%s", string1);
    // fscanf(ptr1, "%s", string);
    // printf("%s", string);
    // printf(" ");
    // fscanf(ptr1, "%s", string);
    // printf("%s", string);
    // printf(" ");
    // fscanf(ptr1, "%s", string);
    // printf("%s", string);
    // printf(" ");

    char *ptr = string1;
    for (int i = 0; i < strlen(ptr); i++)
    {
        if (ptr[i] == '{')
        {
            inside = 1;
            continue;
            printf("Enter name : ");
            getchar();
            gets(string);
        }
        else if (ptr[i] == '}')
        {
            inside = 0;
            continue;
            printf("Enter name : ");
            getchar();
            gets(string);
        }
        if (inside == 0)
        {
            ptr[index] = ptr[i];
            index++;
        }
    }
    ptr[index] = '\0';
    printf("%s", ptr);
    return 0;
}
