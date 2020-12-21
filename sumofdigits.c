// program for sum of digits ion number by Yash Agrawal MCA 1 B
#include<stdio.h>
#include<conio.h>
 int main()
   {
   	 int number,sum=0,temp;
   	 printf("enter any number for digit addition :");
   	 scanf("%d",&number);
   	 while(number!=0)
   	  {
   	  	temp=number%10;
		number=number/10;
		sum+=temp;	  
	  }
	 printf("\n sum of digits of a number = %d",sum);
	 return 0; 
   	 
   }
