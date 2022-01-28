#include <stdio.h>
int main()
{
    int n=0,i=0;
    scanf("%d", &n);
    getchar();
    char choice[n];
    for(i=0;i<n;i++)
    {
    scanf("%c",&choice[i]);
    getchar();

    }
    for(i=0;i<n;i++)
    {
    if(choice[i]=='b' || choice[i]=='B')
    {
        printf("BattleShip\n");
    }
    else if(choice[i]=='c' || choice[i]=='C')
    {
        printf("Cruiser\n");
    }
    else if(choice[i]=='d' || choice[i]=='D')
    {
        printf("Destroyer\n");
    }
    else if(choice[i]=='f' || choice[i]=='F')
    {
        printf("Frigate\n");
    }

    }
    return 0;
}
