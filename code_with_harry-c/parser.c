#include <stdio.h>
#include <string.h>
#include <ctype.h>
void parser(char s[])
{
    char s2[100];
    char *tok = strtok(s, ">");
    tok = strtok(NULL,"<");
    strcpy(s2,tok);
    printf("\n.%s.", tok);
    printf("\n.%s.", s2);
      char *end;
      char *str=&s2[0];
    /* skip leading whitespace */
    while (isspace(*str)) {
        str = str + 1;
    }
    /* remove trailing whitespace */
    end = str + strlen(str) - 1;
    while (end > str && isspace(*end)) {
        end = end - 1;
    }
    /* write null character */
    *(end+1) = '\0';
    printf("\n.%s.",str);
   
}
int main()
{
    char html_string[100];
    printf("\nEnter the string : ");
    gets(html_string);
    puts(html_string);
    printf("\n");
    parser(html_string);
    return 0;
}
