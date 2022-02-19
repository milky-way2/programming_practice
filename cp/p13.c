#include <stdio.h>
int bill(float mc, int tp, int p)
{
    float s = 0;
    s = mc + (tp * (float)(mc / 100)) + (p * (float)(mc / 100));
    float t = s - (int)(s - 1);
    t = t - 1;
    float t1 = (int)(s + 1) - s;

    if (t < t1)
    {
        return (int)s;
    }
    else
    {
        return (int)(s + 1);
    }
}
int main()
{
    int tp, p;
    float mc;
    scanf("%f", &mc);
    scanf("%d", &tp);
    scanf("%d", &p);

    int ba = bill(mc, tp, p);
    printf("%d", ba);
    return 0;
}
