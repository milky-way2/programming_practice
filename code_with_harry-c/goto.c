#include <stdio.h>
int main()
{
//  label:
//       printf("We are inside label");
//     goto end;
//     printf("It is skiped as goto at end"); 
//        goto label;
//        end:
//        printf("\nJust ending the label");
             // using of goto to exit from more than one loop using one statement.
int num;
for (int i = 0; i < 10; i++)
{
    printf("%d\n",i);
    for (int j = 0; j < 8; j++)
    {
        printf("Enter any number . \t Enter 0 to exit .");
        scanf("%d",&num);
        // if (num==0)
        // {
        //     break;
        // }
        if(num==0)
        {
            goto end;
        }
    }
   
}
 end :
    return 0;
       

}