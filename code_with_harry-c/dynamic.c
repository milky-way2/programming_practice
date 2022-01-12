#include <stdio.h>
#include <stdlib.h>
int main()
{
    // char name[40];
    // int *ptr;
    // printf("%d\n",sizeof(ptr));
    // ptr=(int *)malloc(sizeof(int));
    // printf("%d\n",sizeof(ptr));
    // ptr=(int *)malloc(10*sizeof(int));
    // printf("%d\n",sizeof(ptr));
    // free(ptr);
    // printf("%d\n",sizeof(ptr));

    //malloc
    
    int *ptr;
    ptr=(int *)malloc(3*sizeof(int));
for (int i = 0; i < 3; i++)
{
    printf("\nEnter value : ");
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < 3; i++)
{
    printf("\n The value of %d index is %d  ",i,ptr[i]);
}

//calloc

//    int *ptr;
//     ptr=(int *)calloc(3,sizeof(int));
// for (int i = 0; i < 3; i++)
// {
//     printf("\nEnter value : ");
//     scanf("%d",&ptr[i]);
// }
// for (int i = 0; i < 3; i++)
// {
//     printf("\n The value of %d index is %d  ",i,ptr[i]);
// }
// ptr=(int *)realloc(ptr,5*sizeof(int));
// for (int i = 0; i <8 ; i++)
// {
//     printf("\n The value of %d index is %d  ",i,ptr[i]);
// }
free(ptr);
    return 0;
}
