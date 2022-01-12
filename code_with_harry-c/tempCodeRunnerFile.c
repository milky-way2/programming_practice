    int *ptr;
    ptr=(int *)malloc(3*sizeof(int));
for (int i = 0; i < 3; i++)
{
    printf("\nEnter value : ");
    scanf("%d",&ptr[i]);
}
for (int i = 0; i < 3; i++)
{
    printf("\n The value of %d index is %d  ",i,ptr[i]);
}