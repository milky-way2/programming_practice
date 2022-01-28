#include <stdio.h>
#include <math.h>
#define pi 3.142857
float ed(int x1, int y1, int x2, int y2)
{
    int d1, d2, ts;
    float s;
    d1 = (x1 - x2);
    d2 = (y1 - y2);
    ts = pow(d1, 2) + pow(d2, 2);
    s = sqrt(ts);
    // s = pow(ts, .5);
    printf("%f", s);
    return s;
}
float area(int x1, int y1, int x2, int y2, float (*ptr)(int, int, int, int))
{
    float r = (*ptr)(x1, y1, x2, y2);
    float a = pi * pow(r, 2);
    printf("The radius of circle is\t%f\n", r);
    return a;
}
int main()
{
    // int dis=ed(1,1,0,0);
    float (*ptr)(int, int, int, int);
    ptr = &ed;
    int x1, y1, x2, y2;
    printf("\nEnter first point\t");
    scanf("%d%d", &x1, &y1);
    printf("\nEnter second point\t");
    scanf("%d%d", &x2, &y2);
    float ans = area(x1, y1, x2, y2, ptr);
    printf("The area is %f", ans);

    return 0;
}
