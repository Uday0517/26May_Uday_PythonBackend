#include<stdio.h>
main()
{
	int age;
	
	printf("Enter your age:");
	scanf("%d",&age);

	
	if(age>=25)
	{
		printf("\nyou are eligble for driving license");
			printf("\nyou are eligble for Car Rental");
			printf("\nyou are eligble for credit card");
	
	}
	else if(age>=21)
	{
		
		printf("\nyou are eligble for credit card");
	printf("\nyou are eligble for driving license");
	}
	else if(age>=18)
	{
		printf("\nyou are eligble for driving license");
	
	}
	else
	{
		printf("\nsorry you are not eligble..");
	}
	
}
