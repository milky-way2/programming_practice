#include <stdio.h>

int main()
{
    int n2000,n500,n200,n100,n50,n20,n10,n5,n2,n1,amount,tn;
    printf("Enter any amount\t");
    scanf("%d",&amount);
    n2000=amount/2000;
    amount=amount%2000;
    n500=amount/500;
    amount=amount%500;
    n200=amount/200;
    amount=amount%200;
        n100=amount/100;
    amount=amount%100;
    n50=amount/50;
    amount=amount%50;
    n20=amount/20;
    amount=amount%20;
    n10=amount/10;
    amount=amount%10;
    n5=amount/5;
    amount=amount%5;
    n2=amount/2;
    amount=amount%2;
    n1=amount/1;
    amount=amount%1;
    tn=n100+n50+n10+n5+n2+n1+n2000+n500+n200+n20;
    printf("\nTotal number of notes is =%d",tn);
    return 0;
}


