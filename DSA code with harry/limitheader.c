#include<stdio.h>
#include<limits.h>
int main()
{
    int min=INT_MIN;//=-2^31
    int max=INT_MAX;//=(2^31)-1
    printf("Max=%d\tmin=%d",max,min);
    return 0;
}