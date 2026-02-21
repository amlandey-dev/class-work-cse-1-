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
   printf("Enter 4th number:");
   scanf("%d",&d);
   if(a>b&&a>c&&a>d){
          printf("Maximum Number Is:%d",a);
        }else if(b>a&&b>c&&b>d){
          printf("Maximum number is:%d",b);
        }else if(c>a&&c>b&&c>d){
     printf("Maximum Number Is:%d",c);
     }else if(d>a&&d>b&&d>c){
     printf("Maximum Number Is:%d",c);
     }

//getch(for turbo c++ compiler)
}




/*Question--- Write a 'c' program to find maximum of line inputted numbers
(user-inputted) using else-if ladder.*/
