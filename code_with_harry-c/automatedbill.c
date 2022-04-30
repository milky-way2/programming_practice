#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *replaceword(const char *str, const char *oldword, const char *newword)
{
    char *resultstring;
    int i, count = 0;
    int newwordlen = strlen(newword);
    int oldwordlen = strlen(oldword);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldword) == &str[i])
        {
            count++;
            // jump over this word
            i = i + oldwordlen - 1;
        }
    }
    // making a new string to fit in the replace words
    resultstring = (char *)malloc(i + count * (newwordlen - oldwordlen) + 1);
    i = 0;
    while (*str)
    {
        if (strstr(str, oldword) == str)
        {
            strcpy(&resultstring[i], newword);
            i += newwordlen;
            str += oldwordlen;
        }
        else
        {
            resultstring[i] = *str;
            i++;
            str++;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given 'tamplate' is ::: \n%s\n", str);
    char name[100];
    char item[100];
    printf("Enter your name : ");
    gets(name);
    printf("Enter your item name : ");
    gets(item);
    char i1[100] = "x";
    char i2[100] = "y";
    char i3[100] = "z";
    char i4[100] = "s";
    int price1 = 10;
    int price2 = 20;
    int price3 = 30;
    int price4 = 50;
    float tax = 20;
    float discount = 10;
    int elgibilityfordiscount = 500;
    int amount = 0;
    int price = 0;
    int c;
    printf("Enter 1 for change data ;\n0 for continue with previous data.\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("\nEnter price for item 1 : ");
        scanf("%d", &price1);
        printf("\nEnter price for item 2 : ");
        scanf("%d", &price2);
        printf("\nEnter price for item 3 : ");
        scanf("%d", &price3);
        printf("\nEnter price for item 4 : ");
        scanf("%d", &price4);
        printf("\nEnter new tax : ");
        scanf("%f", &tax);
        printf("\nEnter new discount : ");
        scanf("%f", &discount);
        printf("\nEnter elgibility for discount  : ");
        scanf("%d", &elgibilityfordiscount);
        break;
    case 2:

        printf("\nContinue with default values.....\n");
        break;
    }
    if (strcmp(i1, item) == 0)
    {
        amount = price1 + (price1 * (int)tax) / 100;
        price = price1;
        printf("Amount %d", amount);
        if (amount >= elgibilityfordiscount)
        {
            amount = amount - amount * (int)discount;
        }
    }
    else if (strcmp(i2, item) == 0)
    {
        price = price2;
        amount = price2 + (price2 * (int)tax) / 100;
        if (amount >= elgibilityfordiscount)
        {
            amount = amount - amount * (int)discount;
        }
    }
    else if (strcmp(i3, item) == 0)
    {
        price = price3;
        amount = price3 + (price3 * (int)tax) / 100;
        if (amount >= elgibilityfordiscount)
        {
            amount = amount - amount * (int)discount;
        }
    }
    else if (strcmp(i4, item) == 0)
    {
        price = price4;
        amount = price4 + (price4 * (int)tax) / 100;
        if (amount >= elgibilityfordiscount)
        {
            amount = amount - amount * (int)discount;
        }
    }

    // call replacement function
    char *newstr = replaceword(str, "{{item}}", item);
    newstr = replaceword(newstr, "{{outlet}}", "~~~~~medical hall~~~~~~~");
    newstr = replaceword(newstr, "{{name}}", name);
    printf("The actual 'bill' is ::: \n%s\n", newstr);
    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);
    printf("item price =%d\ttax=20 percent\tdiscount on purchase of 500 \t discount=10\nTotal amount :::: %d",price, amount);
    return 0;
}