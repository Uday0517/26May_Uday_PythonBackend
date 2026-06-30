//Create a simple JavaScript function called calculateTotal that takes two numbers: itemPrice and quantity, and returns the total bill amount using arithmetic operators.
#include<stdio.h>
 float calculateTotal(float iteamPrice,int quantity)
 {
 	return iteamPrice*quantity;
 }
 main()
 {
 	int quantity;
 	float total,iteamPrice;
 	
 	printf("enter iteam price:");
 	scanf("%f",&iteamPrice);
 	
 	printf("enter quantity:");
 	scanf("%d",&quantity);
 	
 	total=calculateTotal(iteamPrice,quantity);
 	
 	printf("Total is:%f",total);
 	
 	
 	
 }
