#include <stdio.h>
#include <stdlib.h>
main()

{
	int n;
	printf("give following inputs\n");
	printf(" 1.if u  want to check grade");
	printf("\n 0.if u want to exit\n");
	scanf("%d",&n);
	if (n==1)
	{
		grade();

	}
	else
	{
		exit(0);
	}
}


 void grade()
 {
 	int a;
 	printf("enter the marks of student out of 100\n");
 	scanf("%d",&a);
 	if(a>=85&& a<=100)
 	{
 		printf("\nGrade A");
	 }
	 else if(a>=70&&a<=84)
	 {
	 	printf("\nGrade B");
	 }
	 else if(a>=55&&a<=69)
	 {
	 	printf("\nGrade c");
	 }
	 else if(a>=40&&a<=54)
	 {
	 	printf("\nGrade D");
	 }
	 else if(a>100)
     {

         printf("marks out of range\n");
     }
	 else
	 {
	 	printf("\nGrade F");
	 }

	 printf("\n");
	 return main();
 }
