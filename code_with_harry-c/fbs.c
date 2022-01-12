#include<stdio.h>
#include <stdlib.h>
void fbs(int n)
{
    static int t1=0,t2=1,t3;
    if(n>0){
         t3=t1+t2;
         t1=t2;
         t2=t3;
         printf("%d ",t3);
         fbs(n-1);
    } 
}
int main()
{
    int a,p1=0,p2=1;
    printf("Enter number of terms :  ");
    scanf("%d",&a);
     if(a==0)
    {
        exit(0);
    }
    else if(a==1)
    {
        printf("Fibonacci Series: %d",p1);
    }
    else
    {
        printf("Fibonacci Series: %d %d ", p1, p2);
       fbs(a-2);
     }
     return 0;
    
}