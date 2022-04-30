#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>


char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void drawBoard();

int main()
{
int player=1;
int i;
int choice;

char mark;


do{
drawBoard();

player=(player%2) ? 1:2;
printf("Player %d enter the choice",player);
scanf("%d",&choice);

mark= (player==1)?'X':'0';

if(choice==1&& square[1]=='1')
{
    square[1]=mark;
}
else if(choice==2 && square[2]=='2')
{
    square[2]=mark;
}
else if(choice==3 && square[3]=='3')
{
    square[3]=mark;
}
else if(choice==4 && square[4]=='4')
{
    square[4]=mark;
}
else if(choice==5 && square[5]=='5')
{
    square[5]=mark;
}
else if(choice==6 && square[6]=='6')
{
    square[6]=mark;
}
else if(choice==7 && square[7]=='7')
{
    square[7]=mark;
}
else if(choice==8 && square[8]=='8')
{
    square[8]=mark;
}
else if(choice==9 && square[9]=='9')
{
    square[9]=mark;
}
else
{
    printf("Invalid option");
    player--;
}
i=checkwin();
player++;

}while(i==-1);
drawBoard();
if(i==1)

{
    printf("\n\n==> %d player won",--player);
    return 0;
}
else
{
    printf("Game Drawn\n\n");
    return 0;
}


}
int checkwin()
{
    if(square[1]==square[2] && square[2]==square[3])
    return 1;
    else if(square[4]==square[5] && square[5]==square[6])
    return 1;
    else if(square[7]==square[8] && square[8]==square[9])
    return 1;
    else if(square[1]==square[4] && square[4]==square[7])
    return 1;
    else if(square[2]==square[5] && square[5]==square[8])
    return 1;
    else if(square[3]==square[6] && square[6]==square[9])
    return 1;
    else if(square[1]==square[5] && square[5]==square[9])
    return 1;
    else if(square[3]==square[5] && square[5]==square[7])
    return 1;
    else if(square[1]!= '1' && square[2]!= '2' && square[3]!= '3' && square[4]!= '4' && square[5]!= '5' && square[6]!= '6' && square[7]!= '7' && square[9]!= '9')
    return 0;
    
    else 
    return -1;


}

void drawBoard()
{
    system("CLS");
    printf("\n\n\t\tSOHAM CHAKRABORTTY CREATION\n\n");
    printf("\n\n\t\tTIC-TAC-TOE\n\n");
    printf("\tplayer 1==> X || player 2==> 0 \n");
    printf("     |     |  \n");
    printf("  %c  |  %c  |  %c  \n",square[1], square[2],square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |  \n");
    printf("  %c  |  %c  |  %c  \n",square[4], square[5],square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |  \n");
    printf("  %c  |  %c  |  %c  \n",square[7], square[8],square[9]);
    printf("_____|_____|_____\n");



}