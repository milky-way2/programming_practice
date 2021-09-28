#include <stdio.h>

struct student
{
    int roll;
    float marks;
    char grade[1];

};
void main()
{
    int n; 
int i;
printf("Enter number of student ");
scanf("%d",&n);
struct student s[n];
for(i=0;i<n;i++)
{
    printf("\nEnter info of  student  (%d): (roll,marks,grade) : ",i+1);
    scanf("%d%f%s",&s[i].roll,&s[i].marks,&s[i].grade);
}
printf("\n\nAll student info:\n\n");
for(int j=0;j<n;j++)
{
    printf("\nInfo of student (%d) :  \n",j+1);
    printf(" \nRoll=%d Marks=%.2f Grade=%s\n",s[j].roll,s[j].marks,s[j].grade);
}
}