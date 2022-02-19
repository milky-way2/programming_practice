// If n is odd, print Weird
// If n is even and in the inclusive range of  to 2,5 print Not Weird
// If n is even and in the inclusive range of  to 6, 20 print Weird
// If n is even and greater than 20, print Not Weird
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        printf("Weird");
    }
    else if (n % 2 == 0)
    {
        if (n >= 2 && n <= 5)
        {
            printf("Not Weird");
        }
        else if (n >= 6 && n <= 20)
        {
            printf("Weird");
        }
        else if (n > 20)
        {
            printf("Not Weird");
        }
    }
    return 0;
}
