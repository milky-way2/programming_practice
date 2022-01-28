#include <stdio.h>

int main()
{
    int t,s=0,i,j=0;
    scanf("%d",&t);
    s=t*2;
    int a[s];
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a[j],&a[j+1]);
        j=j+1+1;

    }
    i=0;
    j=0;
    while(i<t)
    {
        printf("%d\n",(a[j]%a[j+1]));
        i++;
        j=j+1+1;
    }
    return 0;
}

