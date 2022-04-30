#include <stdio.h>

int main()
{
    int arr[]={1,2,4,8,0,15,50};
    int s,check=0;
    // s=50;
    printf("element : ");
    scanf("%d",&s);
    for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
    {
        if(s==arr[i])
        {
            printf("Item found at location %d",i);
            check=1;
            break;
        }
      
    }
    if(check==0)
    {
        printf("item not found");
    }
    return 0;
}