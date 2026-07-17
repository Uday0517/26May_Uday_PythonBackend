#include<stdio.h>
main()
{
	int total,d1,d2;
	
	printf("Enter your total ammount of purchese:");
	scanf("%d",&total);
	d1=total-(20*(total/100));
	d2=total-(10*(total/100));
	if(total>2000)
	{
		printf("\nyou are eligble for 20 percent discount");
		printf("\nfinal price:%d",d1);
	}
	else if(total>1000)
	{
		printf("\nyou are eligble for 10 percent discount");
		printf("\nfinal price:%d",d2);
	}
	else
	{
		printf("you are not eligble for disscount");
		
	}
	
}
