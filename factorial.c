//program of finding the fictorial by Yash Agrawal MCA 1B 
#include<stdio.h>
#include<conio.h>
 int main()
   {
   	 int fact=1,number,initial;
   	 printf(" Enter the number to find the factorial : ");
   	 scanf("%d",&number);
   	 for(initial=1;initial<=number;initial++)
   	  {
   	  	fact=fact*initial;
	  }
	  printf("\n facorial of %d is %d",number,fact);
	  return 0;
   }
   	  
