/*Soham Chakrabortty*/
#include <stdio.h>
float interest(int,float);
float pa;
float i;

int main()
{
    float ar,sum,b;
    int a;
    
    
    printf("\nEnter number of years, rate of interest and principle amount\n");
    scanf("%d%f%f",&a,&b,&pa);
    //sum=interest(a,b);
    interest(a,b);
    //sum=i;
    ar=i+pa;
    printf("\nTotal  interest = %f",i);
    printf("\nTotal amount with interest = %f",ar);
    

    return 0;
}
float interest(int noy,float roi)
{
   // float i;
    i=(pa*roi*noy)/100;
  // return i;
}


