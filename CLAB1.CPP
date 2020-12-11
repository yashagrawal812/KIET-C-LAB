//program for format specifiers by Yash Agrawal of Lab 1

#include<stdio.h>
#include<conio.h>
void main()
 {
  clrscr();
  int a=10;                 //integer format specifier
  char str[]="MCA1B";       //string format specifier
  float q;                  //float format specifier
  char c='A';
  scanf("%f",&q);
  printf("%c\n",c);
  printf("float value %f\n",q);
  printf("%d\n",a);
  printf("%o\n",a) ;
  printf("%x\n",a);
  printf("%X\n",a);
  printf("%s\n",str);
  getch();

 }
