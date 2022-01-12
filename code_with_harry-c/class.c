#include <stdio.h>
int sum=347;
int myfunc(int a,int b)
{
    extern int sum;
    return sum;
}

int main()
{
   auto int s= myfunc(3,4);
//    int s= myfunc(3,4); 
    printf("%d",s);
    
    return 0;
}
