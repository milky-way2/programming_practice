#include<stdio.h>
int minimumNumber(int,int,int);
int main()
{
  int p,q,r,ans; 
 printf("Enter three integers ");
 scanf("%d%d%d",&p,&q,&r);
ans=minimumNumber(p,q,r);
printf("Mnimum Number is = %d",ans);
return 0;
}
int minimumNumber(int a,int b,int c)
{
    int j;
    j=(a<b ? (a<c ? a:c) : (b<c ? b : c));
    return j;
}