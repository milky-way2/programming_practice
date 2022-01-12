#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    char s2[50];
    char s3[]=" is a friend of ";
    char s4[50];
    printf("\nEnter string one  :  ");
    gets(s1);
     printf("\nEnter string two  :  ");
    gets(s2);
    strcpy(s4,strcat(s1,s3));
    printf("\n");
    puts(strcat(s4,s2));
    return 0;
}
