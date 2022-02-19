#include <stdio.h>
void toh(int a,char start_peg,char aux_peg,char end_peg);


void main()
{
    int n;
    printf("\nEnter number of disk :  \n");
    scanf("%d",&n);
    toh(n,'A','B','C');
}

void toh(int a,char start_peg,char aux_peg,char end_peg)
{
if(a==0)
{
    printf("\nNothing to move....\n");
    return;
}
else if(a==1)
{
    printf("\nMove disk '%d' from peg '%c' to peg '%c' \n",a,start_peg,end_peg);
}
else 
{
    toh(a-1,start_peg,end_peg,aux_peg);
    printf("\nMove disk '%d' from peg '%c' to peg '%c' \n",a,start_peg,end_peg);
    toh(a-1,aux_peg,start_peg,end_peg);
}

}