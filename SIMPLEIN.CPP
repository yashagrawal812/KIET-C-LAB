 #include<stdio.h>
 #include<conio.h>
 void main()
  {
   clrscr();
   int P,R,T,SI;
   printf("Enter the Principal Amount = ");
   scanf("%d",&P);
   printf("\nEnter the amount of Rate of Interest = ");
   scanf("%d",&R);
   printf("\nEnter the Time Period = ");
   scanf("%d",&T);
   printf("\n Calculate the Simple Interest using formula \n:");
   printf("(P*R*T/100)\n");
   SI=(P*R*T)/100;
   printf("\nSimple Interest = %d ,SI");
   getch();
  }


