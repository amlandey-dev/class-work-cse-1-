#include<stdio.h>
#include<conio.h>
void main(){
    int n,r=0,s=0;
    //clrscr() (For turbo c++ users only)
    printf("Enter any positive number:");
    scanf("\n%d",&n);
    while(n>0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("The sum of the digits is :%d",s);
    //getch() (For turbo c++ users only)
}

//Question-- Write a program in 'c' to print sum of digits.
