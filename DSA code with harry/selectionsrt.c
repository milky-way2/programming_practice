#include <stdio.h>
#include <stdlib.h>
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = temp;
}
void ss(int arr[], int n)
{
    int min, p;
    for (int i = 0; i < n - 1; i++)
    {
        min = arr[i];
        p=i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                p = j;
            }
        }
        
            swap(&arr[i], &arr[p]);
        
        // printf("\nThe sorted array after iteration %d is : ", i);
        // for (int i = 0; i < n; i++)
        // {
        //     printf("\t%d", arr[i]);
        // }
    }
    printf("\nThe FINAL sorted array is : ");
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
    ss(arr, n);
    return 0;
}
