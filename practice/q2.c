#include <stdio.h>
int main()
{
    int c,arr[100],*p,i,j,sum;
    printf("\nEnter size of array\n");
    scanf("%d",&c);
    printf("Enter element of the array\n");
    for(i=0;i<c;i++)
    {
        scanf("%d",&arr[i]);
    }
p=arr;
 for(j=0;j<c;j++)
    {
        sum=sum+*(p+j);
    }
   
    printf("Value of sum of array element = %d",sum);
}