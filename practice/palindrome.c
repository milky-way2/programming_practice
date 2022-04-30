#include <stdio.h>
int main()
{
   int num, reverse_num=0, remainder,temp;
   printf("Enter an integer: ");
   scanf("%d", &num);

   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse_num=reverse_num*10+remainder;
      temp/=10;
   } 

  
   if(reverse_num==num) 
      printf("%d is a palindrome number",num);
   else
      printf("%d is not a palindrome number",num);
      int i, flag = 0;

  for (i = 2; i <= num / 2; ++i) {
    if (num % i == 0) {
      flag = 1;
      break;
    }
  }

  if (num == 1) {
    printf("\n1 is neither prime nor composite.");
  } 
  else {
    if (flag == 0)
      printf("\n%d is a prime number.", num);
    else
      printf("\n%d is not a prime number.", num);
  }
  
   return 0;
}
