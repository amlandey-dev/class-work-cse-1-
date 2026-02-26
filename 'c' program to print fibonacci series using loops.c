#include <stdio.h>
#include <string.h>
void main(){
    int n,a=0,b=1,c,i;
    //clrscr() (for turbo c++ users)
    printf("Enter any number to get fibonacci series:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      printf("%d",a);
      printf("\n");
      c=a+b;
      a=b;
      b=c;
    }
      //getch() (for turbo c++ users)
    }


//Write a 'c' program to print fibonacci series using loops.
