#include<stdio.h>
int main()
{
int m=4,n=3,c,d,a[4][3],sumRow;

//printf("Enter the number of rows and columns of matrix\n");
  // scanf("%d%d", &m, &n);
   printf("Enter the elements 4x3 matrix\n");
 
   for (c = 0; c < m; c++)
     
      for (d = 0; d < n; d++)
         scanf("%d", &a[c][d]);
         for( c = 0; c < m; c++){  
        sumRow = 0;  
        for( d = 0; d < n; d++){  
          sumRow = sumRow + a[c][d];  
        }  
        printf("Sum of %d row: %d\n", (c+1), sumRow);  
    } 
         //for (c = 0; c < m; c++)

        // {
     // for (d = 0; d < n; d++)
      //{
     // printf("%d\t",first[c][d]);
     //    }
    //  printf("\n");
       //  }
      return 0;
} 