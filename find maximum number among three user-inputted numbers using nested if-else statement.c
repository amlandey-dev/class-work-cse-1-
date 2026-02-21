#include<stdio.h>
#include<conio.h>
void main (){
    int a,b,c;
   //clrscr (for turbo c++ compiler)
   printf("Enter 1st number:");
   scanf("%d",&a);
   printf("Enter 2nd number:");
   scanf("%d",&b);
   printf("Enter 3rd number:");
   scanf("%d",&c);
   if(a>b){
        if(a>c){
          printf("Maximum Number Is:%d",a);
        }else{
          printf("Maximum number is:%d",c);
        }
   }else{
     if(b>c){
     printf("Maximum Number Is:%d",b);
     }else{
     printf("Maximum Number Is:%d",c);
     }
}
//getch(for turbo c++ compiler)
}




//Question--- Write a 'c' program to find maximum number among three user-inputted numbers using nested if-else statement.
