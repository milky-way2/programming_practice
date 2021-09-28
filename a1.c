#include <stdio.h>
float avarage(int,int);
int main()
{
    int arr[100],i,c;
    float av;
    printf("Enter size of array");
    scanf("%d",&c);
    printf("Enter element of the array");
    for(i=1;i<c;i++)
    {
        scanf("%d",&arr[i]);
    }
//p=arr;
//int j=i;
//for(j=0;j<c;j++)
int l;
for(int f=0;f<c;f++)
{
  l=l+arr[f];
}
    av=avarage(l,c);


printf("Avarage value of all element of the array is : %f ",av);
return 0;
}
float avarage(int b,int d)
{
float k;

    
k=b/d;
return k;
}