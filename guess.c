#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,n,m;
 m=rand();
 for(i=0;i<=20;i++)
 {
   printf("\n Enter your guess :");
   scanf("%d", &n);
   if(n==m)
   {
    printf("\n Your Guess is correct");
    printf("\n Congragulation You Won");
    printf("\n       <<<<<-----:::::----->>>>>        ")
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
 }
}
