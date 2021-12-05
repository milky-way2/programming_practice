#include<stdio.h>
int main()
{
    int a,marks;

    printf("Enter value of a & marks: ");
    scanf("%d%d",&a,&marks);
    switch(a) 
    {
        
        case 1:
        printf("Value of a is 1");
        switch (marks)
        {
        case 75:
            printf("YOUR Marks are 45");
            break;
        
        default:
        printf("Your marks are not 75");
            break;
        }
        break;
        case 2:
        printf("Value of a is 2");
        break;
        case 3:
        printf("value of a is 3");
        break;
        default:
        printf("Wrong choise try again");
        break;
    }
   return 0;

}