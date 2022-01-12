#include <stdio.h>
//passing arrays by passing base address
// int avarage(int *p)
// {
//     int s=0;
//     for (int i = 0; i < 10; i++)
//     {
//         s=s+*(p+i);
//     }
//*ptr=990;
//     return (s/10);
    
// }

//passing arrays as parameter
int avarage(int arr1[])
{
    int s=0;
    for (int i = 0; i < 10; i++)
    {
        s=s+arr1[i];
    }
   // arr1[0]=675;
    return (s/10);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("Value at index 0  %d\n",arr[0]);
    int av=avarage(arr);
    printf("Value at index 0  %d\n",arr[0]);
    printf("Ans is  %d  \n",av);
    return 0;
}
