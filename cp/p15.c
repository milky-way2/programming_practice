#include <stdio.h>

int main()
{
    int i,t,n1,n2;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++){
    scanf("%d%d",&n1,&n2);
    arr[i]=n1+n2;
    }
     for(i=0;i<t;i++){
    printf("%d\n",arr[i]);
     }
    return 0;
}
