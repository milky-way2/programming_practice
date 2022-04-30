#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1;
    int nextTerm = t1 + t2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if(n==0)
        {
            printf("Fibonacci Series:");
        }
        else if(n==1)
        {
            printf("Fibonacci Series: %d",t1);
        }
        else if(n==2)
        {
            printf("Fibonacci Series: %d %d",t1,t2);

        }
    else
    {
        printf("Fibonacci Series: %d %d ", t1, t2);
    for (i = 1; i <= n; ++i) {
        

        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    }
    return 0;
}