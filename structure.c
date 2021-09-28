#include <stdio.h>
struct student
{
    int roll;
    float marks;
    char grade;

};
void main()
{
    struct student s1;
    s1.roll=10;
    s1.marks=82.50;
    s1.grade='B';
    printf("Roll=%d Marks=%f Grade=%c",s1.roll,s1.marks,s1.grade);
}