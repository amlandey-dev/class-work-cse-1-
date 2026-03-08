#include<stdio.h>
#include<conio.h>
void main(){
    int n,i=0,sum=0;
    //clrscr() (For turbo c++ users only)
    printf("Enter value of nth term:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of the series is :%d",sum);
    //getch() (For turbo c++ users only)
}

//Question-- Write a program in 'c' to print sum of series 1 to n.
