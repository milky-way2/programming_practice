#include <stdio.h>

int main()
{
    int t,s=0,i,j=0;
    scanf("%d",&t);
    s=t*3;
    int a[s];
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a[j],&a[j+1],&a[j+2]);
        j=j+2+1;

    }
    i=0;
    j=0;
    while(i<t)
    {
        if(a[j]+a[j+1]+a[j+2]==180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        i++;
        j=j+2+1;
    }
    return 0;
}
