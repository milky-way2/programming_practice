#include <stdio.h>
#include <stdlib.h>
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = temp;
}
void bs(int arr[], int n)
{
    // int temp;
    static int k=0;
    for (int i = 0; i < n-1; i++)
    {
        k=1;
        printf("Ieration no : %d\n",i+1);
       
        
        for (int j = 0; j < n-1-i; j++)
        {

            // printf("Comparision no :  %d\n",j+1);
            if (arr[j] > arr[j + 1])
            {
                // temp=arr[j+1];
                // arr[j+1]=arr[j];
                // arr[j]=temp;
                swap(&arr[j], &arr[j + 1]);
                k=0;
            }

        }
            if(k)
        {
           break;
        }
    }
    printf("The sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
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
    bs(arr, n);
    return 0;
}
