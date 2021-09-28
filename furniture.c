#include <stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

struct Furniture
{
    int Id;
    char type[1];
    float price;
     

};

void main()
{
    int n; 
int i;

int P;


printf("Enter total numbers of furnitures ");
scanf("%d",&n);
struct Furniture s[n];
struct Furniture *st=&s[0];
for(i=0;i<n;i++)
{
     printf("\nEnter ID , price and type of furniture('P' for plastic & 'W' for wooden)   (%d):  ",i+1);
    
     scanf("%d%f%c",&(st+i)->Id,&(st+i)->price,&(st+i)->type);
   
}

printf("\n\nFurnitures details which are plastic type\n\n");

for(int j=0;j<n;j++)

{
if((st+j)->type =='P')
{
   
    printf(" \nFurniture's ID = %d\tPrice = %f\n",(st+j)->Id,(st+j)->price);
}
}

}
/*
#include<stdio.h>
#include<string.h>
struct Furniture
{
    int Fur_Id;
    char Fur_Type;
    float Price;
};

typedef struct Furniture Fur;
void main()
{
    int i;
    Fur s[10];
    Fur *p = &s[0];
    
    for(i=0; i<10; i++)
    {
        printf("\nEnter info of Furniture %d\n", i+1);
        printf("Enter Furniture ID : \n");
        scanf("%d", &(p+i)->Fur_Id);
        printf("Enter Price : \n");
        scanf("%f", &(p+i)->Price);
        printf("Enter Type : \n");
        scanf(" %c", &(p+i)->Fur_Type);
    }

    printf("\nAll Furniture info having type p \n");
    for(i=0; i<10; i++)
    {
        if((p+i)->Fur_Type == 'P')
        {
        printf("\nInfo of Furniture %d\n", i+1);
        printf("Fur_ID = %d\t", (p+i)->Fur_Id);
        printf("Type =  %c\t", (p+i)->Fur_Type);
        printf("Price =  %f", (p+i)->Price); 
        }
    }
}*/