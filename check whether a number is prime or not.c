#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,fact=0;
    //clrscr() (For turbo c++ users only)
    printf("Enter any number:");
    scanf("%d",&n);

    if(n<=1){
        printf("\nNot a prime number");
    }else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
            printf("\nThe number is a Composite Number");
            fact=1;
            break;
            }
        }
        if(fact==0){
            printf("\nprime number");
        }else{
            printf("\nNot a prime number");
        }
        //getch() (For turbo c++ users only)
    }

}
//Question-- Write a program in 'c' to check whether a number is prime or not.
