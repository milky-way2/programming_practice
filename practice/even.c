#include <stdio.h>

 

void main()

{

    int index, begno, endno, sum = 0;

    printf("Program for sum of even numbers in the given range\n");

 

    printf("Enter Beg. No.: ");

    scanf("%d", &begno);

    printf("Enter End. No.: ");

    scanf("%d", &endno);

    index = begno;

    if( (begno % 2) == 1) // If it ODD, then make it EVEN

        index = begno + 1;

    for(; index <= endno; index += 2)

    {

        sum = sum + index;

    }

    printf("The sum of even numbers between %d and %d is: %d", begno, endno, sum);

}

