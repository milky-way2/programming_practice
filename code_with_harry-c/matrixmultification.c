// multiply two matrix
//  take input from user no of rows and col of both matrix and if posible multiplication then processed other wise stop by giving message that it is not possible
#include <stdio.h>
int main()
{

    printf("Matrix Multiplication\n");
    int i, j, k, l, p, q;
    printf("\nEnter no of rows of first matrix : ");
    scanf("%d", &i);
    printf("\nEnter no of column of first matrix : ");
    scanf("%d", &j);
    printf("\nEnter no of rows of second matrix : ");
    scanf("%d", &k);
    printf("\nEnter no of column of second matrix : ");
    scanf("%d", &l);
    p = i;
    q = l;
    int m1[i][j], m2[k][l], m3[p][q];
    if (j == k)
    {

        printf("\nFirst Matrix :: ");
        for (int m = 0; m < i; m++)
        {
            for (int n = 0; n < j; n++)
            {
                printf("\nEnter element : ");
                scanf("%d", &m1[m][n]);
            }
        }
        printf("\nSecond Matrix :: ");
        for (int m = 0; m < k; m++)
        {
            for (int n = 0; n < l; n++)
            {
                printf("\nEnter element : ");
                scanf("%d", &m2[m][n]);
            }
        }
        printf("\nFirst Matrix :: \n");
        for (int m = 0; m < i; m++)
        {
            for (int n = 0; n < j; n++)
            {
                printf("%d\t", m1[m][n]);
            }
            printf("\n");
        }
        printf("\nSecond Matrix :: \n");
        for (int m = 0; m < k; m++)
        {
            for (int n = 0; n < l; n++)
            {
                printf("%d\t", m2[m][n]);
            }
            printf("\n");
        }
        int z = 0, w = 1;
        for (int m = 0; m < i; m++)
        {
            for (int n = 0; n < l; n++)
            {
                m3[m][n] = ((m1[m][z] * m2[z][n]));
                while (w < j)
                {
                    m3[m][n] += (m1[m][z + w] * m2[z + w][n]);
                    w++;
                }
                w=1;
            }
        }
        printf("\nAnswer Matrix :: \n");
        for (int m = 0; m < p; m++)
        {
            for (int n = 0; n < q; n++)
            {
                printf("%d\t", m3[m][n]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix multiplication not possible.........");
    }

    return 0;
}
