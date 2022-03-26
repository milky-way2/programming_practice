#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    char *arr;
};
int isempty(struct stack* ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack* ptr)
{
    if(ptr->top==(ptr->size-1))
       {
        return 1;
    }
    else{
        return 0;
    }
}
int  push(struct stack* ptr,char element)
{
    if(isfull(ptr))
    {
        printf("\nOverflow...");
        return 0;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=element;
        return 1;
    }
}
int match(struct stack* ptr,char p)
{
    char q=ptr->arr[ptr->top];
    if(p==')' && q=='(')
    {
        return 1;

    }
   else if(p=='}'&&q=='{')
    {
        return 1;
    }
    else if(p==']'&&q=='[')
    {
        return 1;
    }
    else{
        return 0;
    }
}
int  pop(struct stack* ptr)
{
    if(isempty(ptr))
    {
        return 1;
    }
    else{
        ptr->top--;
        return 0;
    }
}
int check(struct stack* ptr,char* p)
{
    int i=0;
    while(p[i]!='\0')
    {
        if(p[i]=='(' || p[i]=='{' || p[i]=='[')
        {
            push(ptr,p[i]);
        }
        else if(p[i]==')'||p[i]=='}'||p[i]==']')
        {
            if(match(ptr,p[i]))
            {
               if(pop(ptr))
               {
                   return 0;
               }
               
            else{
            i++;
            continue;
            }
            }
            else {
                return 0;
            }

        }
        i++;
    }
    if(isempty(ptr))
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    struct stack* p;
    p->size=100;
    p->top=-1;
    p->arr=(char*)malloc(sizeof(char)*p->size);
    int i=0;
    char *exp="[{(m)}]";
    int c;
    c=check(p,exp);
   if(c)
   {
       printf("\nMatched");
   }
   else{
       printf("\nNot matched.......");
   }
    return 0;
}
