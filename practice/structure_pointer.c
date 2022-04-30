#include <stdio.h>

struct student
{
    int roll;
    float marks;
    char grade[1];

};
typedef int myinteger;
typedef struct student std;
void main()
{
    int n; 

printf("Enter number of student ");
scanf("%d",&n);
std s[n];
std *p;
myinteger i;

for(i=0;i<n;i++)
{
    printf("\nEnter info of  student  (%d): (roll,marks,grade) : ",i+1);
    scanf("%d%f%s",&s[i].roll,&s[i].marks,&s[i].grade);
}
p= s;
    printf ("\nDetails of all students are\n\n");
   for(int j=0;j<n;j++)
   {
  
   printf("Info of student(%d) : \n",(j+1));
   printf ("\nRoll number is = %d\n", (p+j)->roll);
   printf ("\nMarks = %.2f\n", (p+j)->marks);
   printf ("\nGrade =%s\n", (p+j)->grade);
   }
/*printf("\n\nAll student info:\n\n");
for(int j=0;j<n;j++)
{
    printf("\nInfo of student (%d) :  \n",j+1);
    printf(" \nRoll=%d Marks=%.2f Grade=%s\n",s[j].roll,s[j].marks,s[j].grade);
}*/
}