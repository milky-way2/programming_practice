#include <stdio.h>
void revarray(int a,int*ptr)
{
    printf("\nThe revers array is :::-  ");
  for (int i = a; i>0; i--)
  {
    printf("%d ",*(ptr+(i-1)));
  } 
}
int main()
{
    int n,i;
    int arr[n];
    printf("Enter size of array : ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter %d element :  ",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is :::-  ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    revarray(n,arr);
    return 0;
}
