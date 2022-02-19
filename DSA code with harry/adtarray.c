#include <stdio.h>
#include <stdlib.h>
// structure making
struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};

// Array creation
void creatArray(struct myarray *p, int tsize, int usize)
{
    p->total_size = tsize;
    p->used_size = usize;
    p->ptr = (int *)malloc(tsize * sizeof(int));
}

// Array initialization
void valArray(struct myarray *q)
{
    for (int i = 0; i < q->used_size; i++)
    {
        printf("\nEnter element %d : \n", i);
        scanf("%d", &q->ptr[i]);
    }
}

// Display array
void showArray(struct myarray *r)
{
    for (int i = 0; i < r->used_size; i++)
    {
        printf("%d\t", r->ptr[i]);
    }
}

// Insertion in array

void insert(struct myarray *s)
{
    int i;
    int choice;
    printf("\nEnter index : ");
    scanf("%d", &i);
    int n = s->used_size;
    printf("\nEnter choice '1' to maintain order '0' for unorder : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int c = n;
        int j = 0;
        while (i != c)
        {
            s->ptr[n - j] = s->ptr[n - (j + 1)];
            c--;
            j++;
        }
        printf("\nEnter element of index %d : ", i);
        scanf("%d", &s->ptr[i]);
    }
    else if (choice == 0)
    {
        s->ptr[n] = s->ptr[i];
        printf("\nEnter element of index %d : ", i);
        scanf("%d", &s->ptr[i]);
    }
    s->used_size++;
}

// Deletion in Array
void delete (struct myarray *d)
{
    int i;
    int choice;
    printf("\nEnter index : ");
    scanf("%d", &i);
    int n = d->used_size;
    printf("\nEnter choice '1' to maintain order '0' for unorder : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int k = 0;
        for (int l = i; l < d->used_size; l++)
        {
            d->ptr[i + k] = d->ptr[i + k + 1];
            k++;
        }
    }
    else if (choice == 0)
    {
        d->ptr[i] = d->ptr[d->used_size - 1];
    }
    d->used_size--;
}

// Searching
void searchArray(struct myarray *l)
{
    int s, flag = 0;
    printf("\nEnter element to search : ");
    scanf("%d", &s);
    for (int i = 0; i < l->used_size; i++)
    {
        if (s == l->ptr[i])
        {
            printf("\nThe element found at index %d .", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\nItem not found.......\n");
    }
}

int main()
{
    struct myarray marks;
    int ts, us;
    printf("\nEnter total size of array: ");
    scanf("%d", &ts);
    printf("\nEnter size to be use : ");
    scanf("%d", &us);

    while (1)
    {
        int choice;
        printf("\n~~~Menu~~~\n1:Creating\n2:Initializaton\n3:Insertion\n4:Deletion\n5:Display\n6:Search Item\n7:Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            creatArray(&marks, ts, us);
            break;
        case 2:
            valArray(&marks);
            break;
        case 3:
            insert(&marks);
            break;
        case 4:
            delete (&marks);
            break;
        case 5:
            showArray(&marks);
            break;
        case 6:
            searchArray(&marks);
            break;
        case 7:
            exit(1);
            break;
        default:
            printf("\nWrong choice try again.........\n");
        }
    }

    return 0;
}
