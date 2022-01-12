#include <stdio.h>
int main()
{
    // int a=34;
    // int*ptr=&a;
    // printf("%d\n",ptr);
    // printf("%d\n",ptr+1);
    // printf("%d\n",ptr+2);
    // char a = '3';
    // char *ptr = &a;
    // printf("%d\n", ptr);
    // ptr++;
    // printf("%d\n", ptr);
    // ptr--;
    // printf("%d\n", ptr);
    // printf("%d\n", ptr + 1);
    // printf("%d\n", ptr + 2);
    int arr[4] = {1, 2, 3, 4};
    //address
    printf("The value of first element is %d \n", arr[0]);
    printf("The address  of first element is %d \n", &arr[0]);
    printf("The address  of first element is %d \n", arr);
    printf("The address  of first element is %d \n", arr + 0);
    printf("The address  of first element is %d \n", arr + 1);
    printf("The address  of second element is %d \n", &arr[1]);
    //here we can't do arr++ it causes an error
    //but int arra=arr; arra++ can do;
// values
    printf("The value of first element is %d \n", arr[0]);
    printf("The value at address  of first element is %d \n", *(&arr[0]));
    printf("The value address  of first element is %d \n", arr[0]);
    printf("The value address  of first element is %d \n", *arr);
    printf("The value address  of first element is %d \n", *(arr + 0));
    printf("The value  address  of first element is %d \n", *(arr + 1));
    printf("The value address  of second element is %d \n", arr[1]);
    printf("Thevalue at address  of second element is %d \n", *(&arr[1]));
    // printf("%d\n",arr[0]);
    // for(int i=0;i<4;i++)
    // {
    //      printf("By normal form  %d\n",arr[i]);
    // }
    //  for(int i=0;i<4;i++)
    // {
    //      printf("By pointerform   %d\n",*(arr+i));
    // }
    // printf("%d\n",*(arr+1));

    return 0;
}
