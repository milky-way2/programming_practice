#include <stdio.h>
#include<math.h>
int main()
{
    int t,i,n;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        arr[i]=sqrt(n);
     
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
