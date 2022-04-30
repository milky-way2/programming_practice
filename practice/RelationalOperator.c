#include<stdio.h>
int main()
{
    int i;
    int a,b,c,n;
    //printf("Enter number of pair ");
    scanf("%d",&n);
    // printf("Enter pair ");
    for(i=1;i<=n;i++)
    {
       
       scanf("%d%d",&a,&b);
       
   
       
       if(a>b)
       {
           printf(">");
       } 
       if(a<b)
       {
           printf("<");
       }
       if(a==b)
       {
           printf("=");
       }
       printf("\n");
    }
   return 0; 
}