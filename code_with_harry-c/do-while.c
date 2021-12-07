#include <stdio.h>
int main()
{
    int num,index=0;

    printf("Enter a number : ");
    scanf("%d",&num);

    do {

        printf("%d \n",index);
        index++;
    }while(index<=num);
    


    return 0;
}