#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a=");
    scanf("%d",&a);
    printf("\tEnter b=");
     scanf("%d",&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("After swap a=%d b=%d",a,b);
    return 0;
}