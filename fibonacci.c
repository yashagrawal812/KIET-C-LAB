#include<stdio.h>
#include<conio.h>
 int main()
   {
   	 int a1=0,a2=1,n,i,next;
   	printf("Enter the value for fibonacci series : ");
   	 scanf("%d",&n);
   	if(n<=0)
		printf("\nenter the value greater than 0");
   	 else
		{
		printf("%d %d ",a1,a2);
   	 for(i=2;i<=n;i++)
   	  {
   	  	next=a1+a2;
   	    printf("%d ",next);
		a1=a2;
		a2=next;   	
	  }
     }
             
      return 0;  	 
   }
