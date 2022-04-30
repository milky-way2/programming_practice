#include <stdio.h>
#include <stdlib.h>
void printarr(int *a,int n)
{
	 printf("\nThe array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}
void merge(int *a,int low,int mid,int high,int n)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int b[n];
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
          b[k]=a[i];
            i++;
            k++;

    }
    while(j<=high)
    {
          b[k]=a[j];
            j++;
            k++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
void ms(int *a,int low,int high,int n)
{
    int mid=(low+high)/2;
    if(low<high)
    {
    ms(a,low,mid,n);
    ms(a,mid+1,high,n);
    merge(a,low,mid,high,n);
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
	printarr(arr,n);
    ms(arr,0,n-1,n);
	printarr(arr,n);
	return 0;
}
