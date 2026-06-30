#include<stdio.h>
#include<stdbool.h>
main()
{ 
	float Productprice,discountPercentage,finalPrice;
	int isMember;
	
	printf("..hello welcome to flipkart..");
	printf("\nEnter product price:");
	scanf("%f",&Productprice);
	
	printf("discount percentage:");
	scanf("%f",&discountPercentage);


	printf("\nAre you a member or not (1 for yes ,0 for no):");
     scanf("%d",&isMember);
     
     printf("\nProduct Price = %.2f", Productprice);
     printf("\nDiscount = %.2f", discountPercentage);
     printf("\nMember = %d", isMember);
     
     
     finalPrice=Productprice-((Productprice*discountPercentage)/100);
     
     if(isMember==1)
     {
       finalPrice=finalPrice-((finalPrice*5)/100);
	 }
	 else
	 {
	 	printf("\nsorry you are not member");
	 }

    printf("\nFINAL PRICE OF YOUR PURCHASE IS:%f",finalPrice);
	
	
}
