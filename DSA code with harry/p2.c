#include <stdio.h>

int main()
{
    int arr[]={1,5,7,10,15,16,25,36,49,52,89};
    int l=0;
    int h=(sizeof(arr)/sizeof(int))-1;
    int s;
    int mid;
    int flag=0;
    printf("Enter : ");
    scanf("%d",&s);
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==s)
        {
            printf("Item found at index %d",mid);
            flag=1;
            break;
        }
        else if(s<arr[mid])
        {
            h=mid-1;
        }
        else if(s>arr[mid])
        {
            l=mid+1;
        }

    }
    if(flag=0)
    {
        printf("Not found");
    }

    return 0;
}
