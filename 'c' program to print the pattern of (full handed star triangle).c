#include <stdio.h>
#include <string.h>
void main(){
    int i,j,k,n;
    //clrscr() (for turbo c++ users)
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      for(j=1;j<=(n-i);j++){
        printf(" ");
      }
      for(k=1;k<=(2*i-1);k++){
        printf("*");
      }
      printf("\n");
      //getch() (for turbo c++ users)
    }
}

//Write a 'c' program to print the pattern of (full handed star triangle).
