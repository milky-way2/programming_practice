#include <stdio.h>

 

void main()

{

    int index, begno, endno, sum = 0;

    printf("Program for sum of odd numbers in the given range");

 

    printf("Enter Beg. No.: ");

    scanf("%d", &begno);

    printf("Enter End. No.: ");

    scanf("%d", &endno);

    index = begno;

    if( (begno % 2) == 0) // If it even, then make it ODD

        index = begno + 1;

    for(; index <= endno; index += 2)

    {

        sum = sum + index;

    }

    printf("The sum of odd numbers between %d and %d is: %d", begno, endno, sum);

}