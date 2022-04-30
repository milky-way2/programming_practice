#include<stdio.h>
#include<windows.h>
int main()
{
    SYSTEMTIME t;

GetLocalTime(&t);
printf("Date: Year=%d Month=%d Day=%d\n Hour=%d Minute=%d Second=%d Milisecond=%d ",t.wYear,t.wMonth,t.wDay,t.wHour,t.wMinute,t.wSecond,t.wMilliseconds);
return 0;
}