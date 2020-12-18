#include<stdio.h>
#include<conio.h>
 void main()
 {clrscr();
  int n;
  printf("enter the number to check = "); //number entered for checking of even/odd
  scanf("%d",&n);
  if(n%2==0)     //condition applied for checking
   {
    printf("\n THE NUMBER %d IS EVEN ",n);
   }
  else
   {
    printf("\n THE NUMBER %d IS ODD ",n);
   }
  getch();
 }