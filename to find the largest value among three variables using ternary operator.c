#include<stdio.h>
#include<conio.h>
void main (){
    int a,b,c,d;
   //clrscr (for turbo c++ compiler)
   printf("Enter 1st number:");
   scanf("%d",&a);
   printf("Enter 2nd number:");
   scanf("%d",&b);
   printf("Enter 3rd number:");
   scanf("%d",&c);
   d=(a>b)?((a>c)?a:c):((b>c)?b:c);
   printf("The Largest Number is %d",d);

//getch(for turbo c++ compiler)
}




/*Question--- write a 'c' program to find the largest value among three variables
using ternary operator.*/
