#include <stdio.h>
void printarr(int *a,int n)
{
	 printf("\nThe array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
}
int p(int *a,int low,int high)
{
    int pivot=a[low];
    int temp;
    int i=low+1;
   int j=high;
    do{
    while(pivot>=a[i])
    {
        i++;
    }
    while(pivot<a[j])
    {
        j--;
    }
    if(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }while(i<j);
      temp=a[low];
        a[low]=a[j];
        a[j]=temp;
return j; 

}
void qs(int *a,int low,int high)
{
	int pi;
    if(low<high)
    {
    pi=p(a,low,high);
    qs(a,low,pi-1);
    qs(a,pi+1,high);
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
    qs(arr,0,n-1);
	printarr(arr,n);
	return 0;
}
















// #include <stdio.h>
// // #include <stdlib.h>
// void q(int *arr,int start,int end){
// 	if(start<end){
// 		int pivot=arr[end];
// 		int i=start-1; 
// 		for(int j=start;j<end;j++){
// 			if(arr[j]<pivot){
// 				i++; 
// 				int temp=arr[j]; 
// 				arr[j]=arr[i]; 
// 				arr[i]=temp; 
// 			}
// 		}
// 		int temp=arr[i+1];
// 		arr[i+1]=arr[end];
// 		arr[end]=temp;
// 		q(arr,start,i);
// 		q(arr,i+2,end);
// 	}
// }
// int main()
// {
//     int n;
//     printf("Enter size of the array : ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter element %d. ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     q(arr,0,n-1);
//     printf("The sorted array is : ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("\t%d", arr[i]);
//     }
//     return 0;
// }

