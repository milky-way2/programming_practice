#include <stdio.h>
#include<limits.h>
#include<stdlib.h>
int maxelement(int *arr,int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\n");
}
void cs(int *arr,int n)
{
    int max=maxelement(arr,n);
    int s=max+1;
    int *aux=(int *)malloc(s*sizeof(int));
    for(int i=0;i<s;i++)
    {
        aux[i]=0;
    }
    // printf("Auxulary array initialization : \n");
    // printArray(aux, s);
    for(int i=0;i<n;i++)
    {
        int m=arr[i];
        aux[m] +=1;
    }
    //   printf("Auxulary array value asing according given array : \n");
    //   printArray(aux, s);
    //   soorting
    // for(int i=0,j=0;i<s;i++)
    // {
    //     while(aux[i] !=0)
    //     {
    //         arr[j]=i;
    //         aux[i] -=1;
    //         j++;
    //     }
    // }  
    // sorting
    int i=0,j=0;
    while(i<s)
    {
        if(aux[i]>0)
        {
            arr[j]=i;
            aux[i] -=1;
            j++;
        }
        else{
            i++;
        }
    }
    free(aux);
    aux=NULL;  
}
int main()
{
   int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d. ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Given array: \n");
    printArray(arr, n);
    cs(arr,n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
