#include<stdio.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a=12,b=25,c,d,e,f;
  printf("Use of bitwise AND .\n");
  c=a&b;
  printf("c= %d ",c);
  printf("\n Use of bitwise OR .\n");
  d=a|b;
  printf("d = %d ",d);
  printf("\n Use of btwise XOR .\n");
  e=a^b;
  printf("e = %d",e);
  printf("\n Use of btwise NOT .\n");
  f=~a;
  printf("f = %d",f);
   printf("\n Use of btwise left shift .\n");
   printf("%d ",a<<1);
   printf("\n Use of btwise right shift .\n");
   printf("%d ",a>>1);
  getch();
 }