#include <stdio.h>

int main()
{
    int n,k,i,j=0;
    scanf("%d%d",&n,&k);
    int t[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        if(t[i]%k==0)
        {
            j++;
        }

    }
    printf("%d",j);
    return 0;
}
