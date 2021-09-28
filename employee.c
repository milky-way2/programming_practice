#include <stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

struct Employee
{
    int Emp_Id;
    char Name[100];
    float Salary;
     char p[100];
   

};
void main()
{
    int n; 
int i;


printf("Enter number of EMPLOYERS ");
scanf("%d",&n);
struct Employee s[n];

for(i=0;i<n;i++)
{
     printf("\nEnter Name of  Employer   (%d):  ",i+1);
    strcpy(s[i].p,s[i].Name);
    // gets(s[i].Name);
    // getchar();
   
}
for(i=0;i<n;i++)

{
     
    
    printf("\nEnter info of  Employer  (%d): (Employer ID, Salary) : ",i+1);
    scanf("%d%f",&s[i].Emp_Id,&s[i].Salary);
  
}


printf("\n\nEmployers details whose salary is above 10000\n\n");

for(int j=0;j<n;j++)
{
if(s[j].Salary>10000)
{
    printf("Employer name %s",s[j].p);
    //puts(s[j].Name);
    printf(" \nEmployer's ID= %d\tSalary= %f\n",s[j].Emp_Id,s[j].Salary);
}
}

}