#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char fav_car;
    char name[50];
};
// typedef struct student
// {
//     int id;
//     int marks;
//     char fav_car;
//     char name[50];
// }std;

// or

// struct student
// {
//     int id;
//     int marks;
//     char fav_car;
//     char name[50];
// }soham,souvik,shubham;

// struct student soham,souvik,shubham;
// std soham,souvik,shubham;
int main()
{
  struct student soham,souvik,shubham;
  // std soham,souvik,shubham;
  soham.id=1;
  souvik.id=2;
  shubham.id=3;
  soham.marks=462;
  souvik.marks=447;
  shubham.marks=450;  
  soham.fav_car='p';
  souvik.fav_car='m';
  shubham.fav_car='c';
  strcpy(soham.name,"Soham Chakrabortty");
  printf("Soham got %d marks.\n",soham.marks);
  printf("Soham's id %d\n",soham.id);
  printf("Soham's name is   %s\n",soham.name);
  printf("Soham's fav char  %c\n",soham.fav_car);
  printf("Souvik got %d marks.\n",souvik.marks);
   printf("Souvik's id %d\n",souvik.id);
  printf("Souvik's fav char  %c\n",souvik.fav_car);
  printf("Shubham got %d marks.\n",shubham.marks);
   printf("Shubham's id %d\n",shubham.id);
  printf("Shubham's fav char  %c\n",shubham.fav_car);
printf("");
    return 0;
}
