#include <stdio.h>

int main()
{
    int ns,na,e=0,o=0;
    scanf("%d",&ns);
while(ns)
{
    scanf("%d",&na);
    if(na%2==0)
    {
       e+=1;
    }
    else
    {
        o+=1;
    }
    ns--;
}
if(e>o)
{
    printf("READY FOR BATTLE");
}
else
{
    printf("NOT READY");
}
    return 0;
}