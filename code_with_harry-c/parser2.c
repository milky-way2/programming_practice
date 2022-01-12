#include <stdio.h>
#include <string.h>
void parser(char *ptr)
{
    int index=0;
    int inside=0;
    for (int i = 0; i < strlen(ptr); i++)
    {
        if(ptr[i]=='<')
        {
            inside=1;
            continue;
        }
        else if(ptr[i]=='>')
        {
            inside=0;
            continue;
        }
        if (inside==0)
        {
            ptr[index]=ptr[i];
            index++;
        }
       
    }
    ptr[index]='\0';
    while(ptr[0]==' ')
    {
        for (int i = 0; i < strlen(ptr); i++)
        {
            ptr[i]=ptr[i+1];
        }
        
    }
    while(ptr[strlen(ptr)-1] == ' ')
    {
        ptr[strlen(ptr)-1]='\0';
    }
    
     printf("~~%s~~",ptr);
}
int main()
{
    char string[100]="<h1>           This is a HEADING     </h1>";
    parser(string);
   
    return 0;
}
