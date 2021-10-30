#include <stdio.h>
int fact(int);
int main()
{
    int f;
    f=fact(5);
    printf("/nThye factorrrial of 5 is : %d",f);
    return 0;

}
int fact( int num)
{
   if(num==0 || num==1)
   {
       return 1;
   }
    
   return num*fact(num-1);
}