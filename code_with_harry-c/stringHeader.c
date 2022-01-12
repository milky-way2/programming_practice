#include <stdio.h>
#include<string.h>
int main()
{
    char s1[]="Soham";
    char s2[]="Cse";
    char s3[]=" is a friend of ";
    char s4[50];
    // printf("The strcmp is %d",strcmp(s1,s2));
    // puts(strcat(s1,s2));
    // printf("%d\n",strlen(s1));
    // printf("%d\n",strlen(s2));
    // printf("the reverse  ");
    // puts(strrev(s2));
    //s3=strcat(s1,s2);//it is not allowed
    strcpy(s4,strcat(s1,s3));
    puts(strcat(s4,s2));
    // puts(s3);
    return 0;
}
/* 
alow user to enter two strings and print 
s1 is a friend of s2 by decliaring three string*/