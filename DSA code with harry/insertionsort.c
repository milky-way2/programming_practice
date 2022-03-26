#include <stdio.h>
#include <stdlib.h>
void is(int arr[], int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    is(arr, n);
    return 0;
}
