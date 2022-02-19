#include <stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    int i,t;
    scanf("%d",&t);
    int arr[t];
    int arr1[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++)
    {
        arr1[i]=fact(arr[i]);
       
    }
    for(i=0;i<t;i++)
    {
        printf("%d",arr1[i]);
        printf("\n");
    }
    return 0;
}
