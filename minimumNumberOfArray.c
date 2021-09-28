#include <stdio.h>

int main()
{
  int array[10],  c, d, swap;

int n=10;
  printf("Enter 10 integers\n");

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

printf("Minimum number from array is = %d ",array[0]);
  
  return 0;
}