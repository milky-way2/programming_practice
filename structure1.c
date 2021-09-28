#include <stdio.h>
struct student
{
    int roll;
    float marks;
    char grade;

};
void main()
{
    struct student s1,s2;
    s1.roll=10;
    s1.marks=82.50;
    s1.grade='B';
    s2.roll=11;
    s2.marks=81.55;
    s2.grade='C';
    printf("Student 1 details: Roll=%d Marks=%f Grade=%c",s1.roll,s1.marks,s1.grade);
    printf("\nStudent 2 details: Roll=%d Marks=%f Grade=%c",s2.roll,s2.marks,s2.grade);
}