#include <stdio.h>
#include <string.h>
// struct student
// {
//     int id;
//     int marks;
//     char fav_car;
//     char name[50];
// };
// int main()
// {
//     struct student s1;
//     s1.id=158;
//     s1.marks=462;
//     s1.fav_car='S';
//     strcpy(s1.name,"SOHAM CHAKRABORTTY");
//     printf("The id is %d\n",s1.id);
//     printf("The marks is %d\n",s1.marks);
//     printf("The fav_char is %c\n",s1.fav_car);
//     printf("The name is %s\n",s1.name);
//     return 0;
// }

union student
{
    int id;
    int marks;
    char fav_car;
    char name[50];
};
int main()
{
    union student s1;
    s1.id=158;
    s1.marks=462;
    s1.fav_car='A';
    strcpy(s1.name,"SOHAM CHAKRABORTTY");
    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav_char is %c\n",s1.fav_car);
    printf("The name is %s\n",s1.name);
    return 0;
}