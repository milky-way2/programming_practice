#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
    char grade[1];
};

int main()
 {
     int n;
     printf("Enter total number of student");
     scanf("%d",&n);
struct student s[n];
    int i;
    printf("Enter information of students:\n");

    
    for (i = 0; i < n; ++i) 
    {
         printf("\nEnter info of number %d: student ",i+1);
        printf("\nEnter Roll:Enter first name:Enter section:Enter marks: ");
        scanf("%d%s%s%f",&s[i].roll,&s[i].firstName,&s[i].grade,&s[i].marks);
        
        /*printf(" ");
        scanf("", );
        printf(" ");
        scanf("");
        printf(" ");
        scanf("", );*/
    }
    printf("Displaying Information of all student:\n\n");

    
    for (i = 0; i < n; ++i) 
    {
         printf("\n Info of %d: student is",i+1);
        printf("\nRoll number: %d\n",s[i].roll);
        printf("First name: %s",s[i].firstName);
        
        printf("Section : ");
        puts(s[i].grade);
        printf("Marks: %.2f",s[i].marks);
        printf("\n");
    }
    return 0;
}
