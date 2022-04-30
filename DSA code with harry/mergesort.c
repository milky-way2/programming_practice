#include<stdio.h>
void merge(int *arr,int start,int mid,int end){
	int n1=mid-start+1,n2=end-mid; 
	int left[n1],right[n2]; 
	for(int i=0;i<n1;i++) left[i]=arr[i+start];
	for(int i=0;i<n2;i++) right[i]=arr[i+mid+1];
	int i=0,j=0,k=start; 
	while(i<n1 && j<n2){
		if(left[i]<right[j]) arr[k++]=left[i++]; 
		else arr[k++]=right[j++];
	}
	while(i<n1) arr[k++]=left[i++];
	while(j<n2) arr[k++]=right[j++];
}

void m(int *arr,int start,int end){
	if(start<end){
		int mid=(start+end)/2; 
		m(arr,start,mid);
		m(arr,mid+1,end);
		merge(arr,start,mid,end);
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
    m(arr,0,n-1);
     printf("The sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
}