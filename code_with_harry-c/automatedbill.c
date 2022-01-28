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
    // call replacement function
    char *newstr = replaceword(str, "{{item}}", "shoes");
    newstr = replaceword(newstr, "{{outlet}}", "vishal");
    newstr = replaceword(newstr, "{{name}}", "Soham");
    printf("The actual 'bill' is ::: \n%s\n", newstr);
    fprintf(ptr2, "%s", newstr);
    fclose(ptr);
    fclose(ptr2);
    return 0;
}