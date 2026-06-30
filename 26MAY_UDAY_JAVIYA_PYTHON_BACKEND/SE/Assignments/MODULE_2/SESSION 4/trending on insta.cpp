//Given three variables: likes, comments, and shares (all numbers), write code to check if a post is 'trending' on Instagram (at least 1000 likes OR more than 200 comments AND at least 50 shares). Print the result.

#include<stdio.h>

 main()
{
	int likes, comments, shares;
	printf("\nWELCOME TO INSTAGRAM.... ");
	
	printf("\nLIKES:");
	scanf("%d",&likes);
	
	
	printf("\nCOMMENTS:");
	scanf("%d",&comments);
	
	
	printf("\nSHARES:");-
	scanf("%d",&shares);
	 if(likes>=1000 || comments>200 && shares>=50)
	 {
	 	printf("\nPOST TRENDING ON INSTAGRAM");
	 }
	 else
	 {
	 	printf("sorry its not trending..");
	 }
	
}
