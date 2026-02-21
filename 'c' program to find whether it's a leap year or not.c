#include<stdio.h>
#include<conio.h>
void main (){
    int y;
   //clrscr (for turbo c++ compiler)
   printf("Enter the year(4-digit number):");
   scanf("%d",&y);
  
   if(y%400==0||y%100!=0&&y%4==0){
     printf("The Year %d is a leap year",y);
     }else{
     printf("The Year %d is not a leap year",y);
     }

//getch(for turbo c++ compiler)
}




/*Question--- Given a 4-digit number representing a year write a 'c' program to find whether
it's a leap year or not.*/
