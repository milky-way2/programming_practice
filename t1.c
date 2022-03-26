#include <stdio.h>
int ans(int n)
{
    int so = 0, se = 0;
    while (n)
    {
        int m = n % 10;
        if (m % 2 == 0)
        {
            se = se + m;
        }
        else
        {
            so = so + m;
        }
        n = n / 10;
    }
    if (so < se)
    {
        return (se - so);
    }
    else
    {
        return (so - se);
    }
}
int main()
{
    int num, a;
    printf("Enter a number : ");
    scanf("%d", &num);
    a = ans(num);
    printf("\nThe answer is : %d",a);
    return 0;
}
