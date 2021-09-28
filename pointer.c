#include <stdio.h>
int main()
{
    int i=5;
    int *j;
    j=&i;
    printf("Address of i = %u\n",&i);
    printf("Address of i = %u\n",j);
    printf("Address of j = %u\n",&j);
    
    printf("value of j= %u\n",j);
     printf("value of i= %d\n",i);
     printf("value of i= %d\n",*(&i));
     printf("value of i= %d\n",*j);
          return 0;

}