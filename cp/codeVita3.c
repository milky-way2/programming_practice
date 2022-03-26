#include <stdio.h>
int main()
{
    int t, r1, r2, r3, v1, v2, v3, c, i = 0;
    scanf("%d", &t);

    while (i < t)
    {
        scanf("%d%d%d", &r1, &r2, &r3);
        scanf("%d%d%d", &v1, &v2, &v3);
        scanf("%d", &c);
        if ((v2 * c) % (v1 * c) == 0 && (v3 * c) % (v1 * c) == 0)
        {
            printf("\nTRUE");
        }
        else
        {
            printf("\nFALSE");
        }
        i++;
    }
    return 0;
}
