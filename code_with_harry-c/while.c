#include<stdio.h>
int main()
{
    int num,index=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(index<=num)
    {
        printf("%d\n",index);
        index++;
    }
    return 0;

}