#include <stdio.h>
int multiply(int,int);
void main()
{
    int n,f,m;
    printf("Enter two positive integer");
    scanf("%d%d",&n,&m);
f=multiply(n,m);
printf("\nThe multiply of %d and %d is : %d",n,m,f);

}
int multiply(int a,int b)
{
    if(a<b)
    {
    if(b>0)
    return a+multiply(a,(b-1));
    else
    { 
    
    return 0;
    }
    }
    else{
        if(a>0)
    return b+multiply(b,(a-1));
    else
    { 
    
    return 0;
    }
    }
}