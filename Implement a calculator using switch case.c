#include<stdio.h>
#include<conio.h>
void main (){
    int a,b,c;
    float r;
   //clrscr (for turbo c++ compiler)
   printf("Enter 1st number:");
   scanf("%d",&a);
   printf("Enter 2nd number:");
   scanf("%d",&b);
   printf("\t ***MENU*** \nEnter 1 to add\nEnter 2 to suntract\nEnter 3 to multiply\nEnter 4 to divide\n");
   scanf("%d",&c);
   switch(c){
    case 1:
        r=a+b;
        printf("%d+%d=%f",a,b,r);
        break;

    case 2:
        r=a-b;
        printf("%d-%d=%f",a,b,r);
        break;

    case 3:
        r=a*b;
        printf("%d*%d=%f",a,b,r);
        break;

    case 4:
        if(b==0){
            printf("\nINVALID OPERATION");
        }else{
        r=(float)a/b;
        printf("%d/%d=%f",a,b,r);
   }
   break;
   default:
    printf("\nInvalid operation");
}
//getch(for turbo c++ compiler)
}




/*Question--- write a 'c' program using switch case statement to write
a menu driven program(Implement a calculator).*/
