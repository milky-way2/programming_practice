/*
km to miles
inch to foot
cm to inch
pound to kg
inch meter
*/
#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     float kmTomile=0.6213711922,inchToft=0.0833333333,cmToin=0.3937007874,poTokg=0.4535923,inTome=0.0254;
     while(1)
     {
         int c;
         float from,to;
         printf("\n#####...UNIT conversation...#####\n");
         printf("\n1.km to miles\n2.inch to foot\n3.cm to inch\n4.pound to kg\n5.inch meter\n6.Quit");
        printf("\nEnter your choice :  ");
        scanf("%d",&c);
        switch(c)
        {
            case 1: 
            printf("\nEnter From  :  \n");
            scanf("%f",&from);
            to=from*kmTomile;
            printf("\nTo :  %f\n",to);
            break;
            case 2: 
            printf("\nEnter From  :  \n");
            scanf("%f",&from);
            to=from*inchToft;
            printf("\nTo :  %f\n",to);
            break;
            case 3: 
            printf("\nEnter From  :  \n");
            scanf("%f",&from);
            to=from*cmToin;
            printf("\nTo :  %f\n",to);
            break;
            case 4: 
            printf("\nEnter From  :  \n");
            scanf("%f",&from);
            to=from*poTokg;
            printf("\nTo :  %f\n",to);
            break;
            case 5: 
            printf("\nEnter From  :  \n");
            scanf("%f",&from);
            to=from*inTome;
            printf("\nTo :  %f\n",to);
            break;
            case 6: 
            exit(0);
            break;
            default:
            printf("\nWrong choice ..... \nTry again \n");

        }
     }


return 0;
 }
