//program of swapping using bitwise operator
#include<stdio.h>
#include<conio.h>
 void main()
  {
   clrscr();
   int a=12,b=13;
   printf("values before swapping a= %d  , b= %d  ",a,b);
   a=a^b;
   b=a^b;
   a=a^b;
   printf("\nvalues after swapping a = %d , b = %d",a,b);
   getch();
  }
