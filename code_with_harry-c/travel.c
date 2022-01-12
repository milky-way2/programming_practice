#include <stdio.h>
#include <string.h>
struct driver
{
    char name[50];
    char dln[15];
    char rn[100];
    char kms[50];
};
int main()
{
    // int n =3;
    int n;
    printf("Enter no of DRIVERS :  ");
    scanf("%d", &n);

    // To clear the input buffer mean when we take input and press enter then 'Enter' is trated as a input for  next get request. to clear the input buffer we need to do we can use eithe fflush(stdin); or getchar();
    fflush(stdin);  // *N.B:- we need to clear the input buffer before using gets() because gets() read anything in the input buffer until it encounters a new line or return character 
    //        or  
    // getchar();    //we can use eithe fflush(stdin); or getchar();
    printf(":::::Details of %d drivers :::::", n);
    struct driver arr[n];
    int i = 0;

    while (i != n)
    {
        printf("\nEnter name of %d.) driver : ", (i + 1));
        gets(arr[i].name);
        printf("\nEnter Driving licence no of %d.) driver : ", (i + 1));
        gets(arr[i].dln);
        printf("\nEnter route name of %d.) driver : ", (i + 1));
        gets(arr[i].rn);
        printf("\nEnter total km of %d.) driver : ", (i + 1));
        gets(arr[i].kms);
        i++;
    }
    int k = 0;
    while (k != n)
    {
        printf("\n!!!...DETAILS OF %d.) DRIVER...!!!", (k + 1));
        printf("\nName :::->\n%s", arr[k].name);
        printf("\n Driving licence no :::->\n%s", arr[k].dln);
        printf("\nRoute name :::->\n%s", arr[k].rn);
        printf("\nTotal km :::->\n%s", arr[k].kms);
        k++;
    }
    return 0;
}
