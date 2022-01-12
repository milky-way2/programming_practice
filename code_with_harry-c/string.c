#include <stdio.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[]={'s','o','h','a','m','\0'};
    // char str[]="soham";
    char str[50];
    printf("Enter : ");
    gets(str);
    printf("\n");
    // char str[50]="soham";
    // char str[5]="soham";
    printStr(str);
    printf("\n");
    puts(str);
    printf("%s", str);

    return 0;
}
