#include <stdio.h>
// #include<time.h>
int main()
{
    //  double time_use;
    // clock_t tBeg=clock();
    int n;
    printf("\nEnter size of the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter element :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The given array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    int s;
    printf("\nEnter item to search : ");
    scanf("%d", &s);

    int lw = 0;
    int h = n - 1;
    int mid;
    int flag = 0;
    while (lw <= h)
    {
        mid = (h + lw) / 2;
        if (s == arr[mid])
        {
            flag = 1;
            printf("\nItem found at index:::-> %d\n", mid);
            break;
        }
        else
        {
            if (s < arr[mid])
            {
                h = mid - 1;
            }
            else
            {
                lw = mid + 1;
            }
        }
    }
    if (lw > h)
    {
        flag = 1;
        printf("Item not found\n");
    }
//     clock_t tEnd=clock();
// time_use=((double) (tEnd-tBeg))/CLOCKS_PER_SEC;
// printf("\nTotal time required:::->%f",time_use);
    return 0;
}
