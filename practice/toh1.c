#include<stdio.h>

void TOH(int n,char BEG,char AUX,char END)
{
	if(n>=1)
	{
		TOH(n-1,BEG,END,AUX);
		printf("Move disk %d %c to %c\n",n,BEG,END);
		TOH(n-1,AUX,BEG,END);
	}
}
int main()
{
	int n=3;              // n = no. of disk.
	TOH(n,'A','B','C');    // fuction calling.
	return 0;
}
