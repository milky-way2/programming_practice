#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int t_size;
    int u_size;
    int *ptr;
};
void creat(struct myarray *p, int t, int u)
{
    p->ptr = (int *)malloc(t * sizeof(int));
    p->t_size = t;
    p->u_size = u;
}
void initialization(struct myarray *p)
{
    for (int i = 0; i < p->u_size; i++)
    {
        printf("\nEnter element %d :", i);
        scanf("%d", &p->ptr[i]);
    }
}
void display(struct myarray *p)
{
    printf("\nThe array is : \n");
    for (int i = 0; i < p->u_size; i++)
    {
        printf("%d\t", p->ptr[i]);
    }
}
void insertO(struct myarray *p)
{
    int index, elt;
    printf("\ninsert oredr Enter index : ");
    scanf("%d", &index);
    printf("Enter item : ");
    scanf("%d", &elt);

    int j = 0;
    for (int i = ((p->u_size) - 1); i >= index; i--)
    {
        p->ptr[(p->u_size) - j] = p->ptr[(p->u_size) - (j + 1)];
        j++;
    }
    p->ptr[index] = elt;
    p->u_size++;
}
void insertU(struct myarray *p)
{
    int index, elt;
    printf("\ninsert unorder Enter index : ");
    scanf("%d", &index);
    printf("Enter item : ");
    scanf("%d", &elt);
    p->ptr[p->u_size] = p->ptr[index];
    p->ptr[index] = elt;
    p->u_size++;
}
void deleteO(struct myarray *p)
{
    int index;
    printf(" \ndelete in order Enter index : ");
    scanf("%d", &index);
    
    for (int i = index; i < p->u_size; i++)
    {
        p->ptr[i] = p->ptr[i + 1];
       
    }
    p->u_size--;
}
void   deleteU(struct myarray* p)
{
    int index;
    printf(" \ndelete unorder Enter index : ");
    scanf("%d", &index);
    p->ptr[index]=p->ptr[(p->u_size)-1];
    p->u_size--;
}
int main()
{
    struct myarray no;
    creat(&no, 10, 5);
    initialization(&no);
    display(&no);
    insertO(&no);
    display(&no);
    insertU(&no);
    display(&no);
    deleteO(&no);
    display(&no);
    deleteU(&no);
     display(&no);
    return 0;
}
