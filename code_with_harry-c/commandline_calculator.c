// take three commandline arguments
// first, add/subtract/divide/multiply
//  next, two number
//  ex: add 45 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char *operation;
    operation = argv[1];
    n1 = atoi(argv[2]);
    n2 = atoi(argv[3]);

    printf("n1 is ::: %d\n", n1);
    printf("n2 is ::: %d\n", n2);
    if (strcmp(operation, "add") == 0)
    {
        printf("Answer of~~~~%s~~~~ is ::: %d\n", operation, (n1 + n2));
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("Answer of~~~~%s~~~~ is ::: %d\n", operation, (n1 - n2));
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("Answer of~~~~%s~~~~ is ::: %d\n", operation, (n1 * n2));
    }
    else if (strcmp(operation, "division") == 0)
    {
        printf("Answer of~~~~%s~~~~ is ::: %f\n", operation, ((float)n1 / (float)n2));
    }
    else if (strcmp(operation, "modulo") == 0)
    {
        printf("Answer of~~~~%s~~~~ is ::: %d\n", operation, (n1 % n2));
    }

    return 0;
}
