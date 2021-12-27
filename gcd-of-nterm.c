#include <stdio.h>

int main()
{
    int n,num1, num2, numerator, denominator, remainder, temp_gcd,j=0;
    printf("Enter no of integers :  ");
    scanf("%d", &n);
    int arr[n],r[n-2];
    for (int i = 0; i < n; i++)
    {
        printf("\nElement %d  :   ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("You enter :    ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    num1 = arr[0];
    num2 = arr[1];
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }

    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    temp_gcd = denominator;
       printf("\ngcd=   %d",temp_gcd);
       int p;
    for(int i=2;i<=n-1;i++)
    {
        //   if(temp_gcd>arr[i])
        //   {
        //       temp_gcd--;
        //   }
        p=arr[i]%temp_gcd;
      
        r[j]=p;
        j++;
        // if(temp_gcd!=denominator)
        // {
        //     temp_gcd++;
        // }
          
    }
    for(j=0;j<n-2;j++){
    printf("\n%d\t",r[j]);
    }
    return 0;
}