#include <stdio.h>
#include <math.h>
int palindrome(int num, int n)
{
    int prev = 0, cur = 0;
    prev = num;
    while (num % 10 != 0)
    {
        cur = cur + ((num % 10) * pow(10, (n - 1)));
        num = num / 10;
        n--;
    }
    // printf("\n%d\n", cur);
    if (cur == prev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num, f, temp, t, k = 0;
    printf("\n Enter a number : ");
    scanf("%d", &num);
    temp = num;
    while (num % 10 != 0)
    {
        k++;
        t = num % 10;
        num = num / 10;
    }
    num = temp;
    f = palindrome(num, k);
    if (f == 1)
    {
        printf("\nThe given number is palindrome number.");
    }
    else
    {
        printf("\nThe given number is not a palindrome number.");
    }
    return 0;
}


// #include<stdio.h>
// int main()
// {
//     int n,reversed=0,remainder,original;
//     printf("Enter an integer :");   
//     scanf("%d",&n);
//     original=n;
// ////reversed integer stored in reversed variable///
// while(n!=0)
// {
//     remainder=n%10;
//     reversed=reversed*10+remainder;
//     n=n/10;
// }
// ///palindrome if original and reversed are equal///
// if(original==reversed)
// printf("%d is a palindrome.",original);
// else
// printf("%d is not a palindrome.",original);
// return 0;
// }