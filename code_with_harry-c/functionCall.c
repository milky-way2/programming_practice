#include <stdio.h>

void call(int*p)
{
     printf("\nCall by refference    ....\n");
    printf("in the function \n");
    printf("derefference =  %d",*p);
    printf("\nAddress of a  %d",p);
    *p=50;
     printf("\nAfter change value in the function\n");
      printf("\ndereffence =  %d",*p);
    printf("\nAddress of a  %d\n out of function\n",p);

}
// void call(int p)
// {   printf("\nCall by value    ....\n");
//     printf("in the function \n");
//     printf("p =   %d",p);
//     p=50;
//      printf("\nAfter change value in the function\n");
//      printf("Address of p   ",&p);
//       printf("\np =   %d\n out of function",p);

// }
int main()
{
    int a=7;
    printf("Address of a  %d",&a);
    printf("\na =  %d\n",a);
     int *x=&a;
     call(x);//call  by refference 
    // call(&a); //call  by refference
   // call(a);//call by value
    // call(7);//call by value
    printf("\nAfter function call\n");
      printf("Address of  a %d",&a);
    printf("\na =  %d\n",a);

    return 0;
}
