#include<stdio.h>
void main()
{
 int i,n,m=56;
 for(i=0;i<=20;i++)
 {
   printf("\n Enter your guess :");
   scanf("%d", &n);
   if(n==m)
   {
    printf("\n Your Guess is correct");
    break;
   }
   else if(n<m)
   {
    printf("\n Your guess is low");
   }
   else
   {
    printf("\n Your guess is high");
   }
  printf("\n Congragulation You Won");
 }
}
