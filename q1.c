#include<stdio.h>
int main()
{
    int c,arr[100],i,j,sum;
    int av;
    printf("\nEnter size of array\n");
    scanf("%d",&c);
    printf("Enter element of the array\n");
    for(i=0;i<c;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<c;j++)
    {
sum=sum+arr[j];
    }
    printf("\nSummation of all array element is = %d\n",sum);
    av=sum/c;
    printf("\nAvarage of all array element is = %d\n",av);

}