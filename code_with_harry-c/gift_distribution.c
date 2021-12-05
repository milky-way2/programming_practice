#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    
    
    printf("\n #### Enter name of subject you have passed  ####\nM : for math\nS : for science\nB : for science and math both\n");

char sub;
// gets(sub);
scanf("%c",&sub);
printf("%c",sub);
if (sub=='M')
printf("\nYou will get rs 10");
else if(sub=='S')
printf("\nYou will get rs 15");
else if(sub=='B')
printf("\nYou will get rs 45");
else 
{
    printf("You lose");
}




    return 0;
}
