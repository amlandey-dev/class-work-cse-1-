#include <stdio.h>
#include <string.h>
void main(){
    int c[5],i,j,t;
    //clrscr() (for turbo c++ users)
    printf("Enter 5 numbers:");
    for(i=0;i<5;i++){
      scanf("%d",&c[i]);
      }
      for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
          if(c[j]>c[j+1]){
            t=c[j];
            c[j]=c[j+1];
            c[j+1]=t;
          }
        }
      }
      printf("\nsorted array in ascending order");
      for(i=0;i<5;i++){
        printf("%d",c[i]);
      }
      //getch() (for turbo c++ users)
    }


//Write a 'c' program to sort an array in ascending order using bubble sort method.
