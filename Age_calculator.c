//SOHAM CHAKRABORTTY
#include <stdio.h>
#include<windows.h>

    
int main()
{
   

    int y1,m1,d1,y2,m2,d2,ya,ma,da;
    system("CLS");
    printf("\n\t\t\t***Age Calculator***\n");
    printf("\t\t\t by -SOHAM CHAKRABORTTY\n\n");
 printf("\n\tEnter date according to which date you want to calculate age\tN.B:(If you want to calculate your age with current date input 0 0 0 and press 'Enter'\n\a"); //according  to which date
 printf("\t\tyyyy | mm | dd |\n\t\t");
 printf("     |    |    |\n\t\t");
 
 scanf("%d%d%d",&y1,&m1,&d1);
 printf("\t\t_____|____|____|\n");
if(y1==0 && m1==0 && d1==0)
{

 SYSTEMTIME t;
 
GetLocalTime(&t);
printf("\n\tToday_Date: %d %d %d\n",t.wYear,t.wMonth,t.wDay);
 y1=t.wYear;
 m1=t.wMonth;
 d1=t.wDay;
}
 printf("\tEnter your date of birth\n\a");  //date of birth
 printf("\t\tyyyy | mm | dd |\n\t\t");
 printf("     |    |    |\n\t\t");
 scanf("%d%d%d",&y2,&m2,&d2);
 if(d1<d2)
 { 
     d1=d1+30;
     m1=m1-1;
 }
 else
 {
     d1=d1;
     m1=m1;
 }
 if(m1<m2)
 {
     m1=m1+12;
     y1=y1-1;
 }
 else
 {
     m1=m1;
     y1=y1;
 }
 da=d1-d2;
 ma=m1-m2;
 ya=y1-y2;
 printf("\t\t_____|____|____|");
 printf("\n\tYour age is %d year %d month %d day\a",ya,ma,da);
 return 0;
}

