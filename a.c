
    #include<stdio.h>  
    int factorial(int);
    
int main()    
{    
 int number,ans;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
 ans=factorial(number);   
  printf("Factorial of %d is: %d",number,ans);    
  printf("By SOHAM CHAKRABORTTY");
return 0;  
}  
int factorial(int n) 
{
    int i;
    int fact=1;
    for(i=1;i<=n;i++)
    {    
      fact=fact*i; 
    } 
    return fact;  
}
