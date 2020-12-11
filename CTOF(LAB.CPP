//program to convert degree celcius to fahrenheit  by Yash Agrawal of Lab 1
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  clrscr();
  float C,F;
  printf("enter the temperature in celcius :-");
  scanf("\t %f",&C);
  F=(C*1.8)+32;
  printf("\nTemperature in celcius = %f\n",C);
  printf("\nTemperature in Faherenheit = %f ",F);
  getch();


 }

