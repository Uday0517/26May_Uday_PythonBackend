//Build a Zomato-style food suggestion tool: take the user's preferred meal time ('breakfast', 'lunch', 'dinner', or 'snack') and use a switch-case statement to suggest a popular dish for that time. If the input doesn't match any meal, suggest 'Try some fruits!'.
#include<stdio.h>
main()
{
	int choice;
	
	
	printf("\n1.lunch");
	
	printf("\n2.dinner");
	
	printf("\n3.breakfast");
	
	printf("\nPlease enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("dal-chawal,aloo-ki-sabji,dal-dhokdi,rajma-chaval,poolav");
		break;
		case 2:
		printf("panner ki sabji,chinese,sizzler");
		break;
		case 3:
		printf("poha,chai-bhakhri,vanela gathiya");
		break;
			
	    default:
		printf("Doesn't match any meal");	
	}
}
