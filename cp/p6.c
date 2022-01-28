#include <stdio.h>

int main()
{
    int t;
        int n;
    scanf("%d",&t);
    int a[t];
    int q=t;
    int i=0;
        int c=0;
    while(t)
    {
       scanf("%d",&n);
        t--;
    
    while(n)
    {
        int m=n%10;
        if(m==4)
        {
            c++;

        }
        n=n/10;
    }
    a[i]=c;
    i++;
    c=0;
    }
    i=0;
    while(i<q)
    {
        printf("%d\n",a[i]);
        i++;
    }
    return 0;
}
