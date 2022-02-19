#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int grn(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    char name[40];
    printf("\n\n.....!.....~.WELL COME.~.....!.....\n\n");
    printf("Enter your name : ");
    gets(name);
    printf("\n");
    int i = 0, com, usr, cp = 0, up = 0;
    while (i < 5)
    {
        printf("\nPress \n'0' ROCK\n'1' PAPER\n'2' SCISSOR\n");
        printf("\n%s turns..........\n", name);
        scanf("%d", &usr);
        printf("\nComputer Turn..........\n");
        com = grn(3);
        printf("%d\n", com);
        if (usr == 0 && com == 1)
        {
            printf("\nCom won......\n");
            cp++;
        }
        else if (usr == 0 && com == 2)
        {
            printf("\nYou won......\n");
            up++;
        }
        else if (usr == 0 && com == 0)
        {
            printf("\nDraw.....\n");
        }
        else if (usr == 1 && com == 0)
        {
            printf("\nYou won......\n");
            up++;
        }
        else if (usr == 1 && com == 1)
        {
            printf("Draw.....\n");
        }
        else if (usr == 1 && com == 2)
        {
            printf("\nCom won......\n");
            cp++;
        }
        else if (usr == 2 && com == 0)
        {
            printf("\nCom won......\n");
            cp++;
        }
        else if (usr == 2 && com == 1)
        {
            printf("\nYou won......\n");
            up++;
        }
        else if (usr == 2 && com == 2)
        {
            printf("\nDraw.....\n");
        }

        i++;
    }
    printf("\n\n.....Game Over.....\n\n");
    printf("%s Total point = %d \t Computer Total point = %d\n", name, up, cp);
    if (cp > up)
    {
        printf("\n\a\a\aYou lose..........!\a\a\a\n");
    }
    else if (cp == up)
    {
        printf("\n\a\a\a........DRAW..............\a\a\a\n");
    }
    else if (up > cp)
    {
        printf("\n\a\a\aYou win..........!\a\a\a\n");
    }

    return 0;
}