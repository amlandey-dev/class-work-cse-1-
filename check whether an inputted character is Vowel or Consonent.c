#include<stdio.h>
#include<conio.h>
void main (){
    char a;
   //clrscr (for turbo c++ compiler)
   printf("Any character from a to z:\n");
   scanf("%c",&a);
   switch(a){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("%c character is vowel",a);
   break;
   default:
     printf("%c character is consonant",a);
}
//getch(for turbo c++ compiler)
}




/*Question--- write a 'c' program to check whether an inputted
character is Vowel or Consonent(using switch case).*/
