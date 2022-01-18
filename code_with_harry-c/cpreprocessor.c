#include <stdio.h>

int main()
{
    printf("Today  is %s \n", __DATE__);
    printf("Time is %s \n", __TIME__);
    printf("File name is %s \n", __FILE__);
    printf("Line is %d \n", __LINE__);
    printf("ANSI status= %d \n", __STDC__);
    return 0;
}
