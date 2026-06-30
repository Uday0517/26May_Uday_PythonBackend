//Write a function isEligibleForOffer that takes a user's age and total order value, and returns true if the user is 18 or older AND the order value is above 500, otherwise false.<br><br><em><strong>Hint:</strong> Use relational and logical operators together.</em>

#include<stdio.h>
 void isEligibleForOffer(int age,int total_order)
 {
 	if(age>=18 && total_order>500 )
 	{
 		printf("true");
	 }
	 else
	 {
	 	printf("false");
	 }
 }
 main()
 {
 	int age,total_order;
 	printf("age of user:",age);
 	scanf("%d",&age);
 	 
 	printf("total order of user:",total_order);
 	scanf("%d",&total_order);
 	
 	isEligibleForOffer(age,total_order);
 	
 	
 }
    
