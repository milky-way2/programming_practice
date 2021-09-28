#include<stdio.h>
#include<stdlib.h>
struct student{
   int roll;
   float marks;
   char grade[1];
   
};
 int main ( )
 {
     int n;

  printf("Enter total number of student  ");
  scanf("%d",&n); 
     struct student s[n];
   struct student *st= &s[0];
   for(int i=0;i<n;i++)
   {
   printf("enter roll,marks , grade:  ");
   scanf ("%d%f%s",&(st+i)->roll,&(st+i)->marks,&(st+i)->grade);
  
    
   }
   st= s;
    printf ("\nDetails of all students are\n\n");
   for(int j=0;j<n;j++)
   {
  
   printf("Info of student(%d) : \n",(j+1));
   printf ("\nRoll number is = %d\n", (st+j)->roll);
   printf ("\nMarks = %.2f\n", (st+j)->marks);
   printf ("\nGrade =%s\n", (st+j)->grade);
   
   }
  return 0;
}