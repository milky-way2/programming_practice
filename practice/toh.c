#include <stdio.h>
void toh(int a, char start, char aux, char end);
int main()
{
    int n;
    printf("Enter number of disk : ");
    scanf("%d",&n);
    toh(n,'A','B','C');
    return 0;
}
void toh(int a, char start, char aux, char end )
{
    if (a==1)
    {
        printf("Move disk %d from %c to %c \n",a,start,end);
    }
    else
    {
       toh(a-1,start,end,aux);
        printf("Move disk %d from %c to %c \n",a,start,end);
        toh(a-1,aux,start,end);
    }
}