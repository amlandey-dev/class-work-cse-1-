#include <stdio.h>
#include <string.h>
void main(){
    int i,j,n;
    //clrscr() (for turbo c++ users)
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
        printf("*");
      }
      printf("\n");
      //getch() (for turbo c++ users)
    }
}

//Write a 'c' program to print the pattern of (left handed star triangle).
