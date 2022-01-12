#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,k=0;
    // char id[n];
    while(k<3){
    printf("\nEnter size of id : ");
    scanf("%d",&n);
    // fflush(stdin);
    char *ptr;
    ptr=(char *)malloc(n*sizeof(char));
   
    printf("\nEnter your id : ");
    scanf("%s",ptr);
    printf("\nYour id is %s\n",ptr);
    free(ptr);
    k++;
    }
    // gets(id);
    //  ptr=id;
    //  puts(ptr);
    //   while(k!=2){
    //   printf("\nEnter new size : ");
    //   scanf("%d",&n);
    //   fflush(stdin);
    //   ptr=(char *)realloc(ptr,n*sizeof(char));
    //   printf("\nEnter your id : ");
    //   gets(id);
    //   ptr=id;
    //   puts(ptr);
    //   k++;
    //   }
   
    
    return 0;
}
