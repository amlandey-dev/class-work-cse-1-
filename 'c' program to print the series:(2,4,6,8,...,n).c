#include <stdio.h>
#include <string.h>
void main(){
    int i,n;
    //clrscr() (for turbo c++ users)
    printf("Enter any number to start the series:");
    scanf("%d",&n);
    printf("\nThe series is:");
    for(i=2;i<=n;i+=2){
      printf("%d",i);
      i+2;
      printf("\n");
    }
      //getch() (for turbo c++ users)
    }


//Write a 'c' program to print the series:(2,4,6,8,...,n).
