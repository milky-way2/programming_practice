#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int grn(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int main()
{
  printf("TThe random number is %d\n",grn(3));//between 0 to 100;here we write 3 the will generate 0 to 3   
 
    return 0;
}
