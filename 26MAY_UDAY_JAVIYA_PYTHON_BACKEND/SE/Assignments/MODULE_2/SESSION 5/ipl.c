//Create a simple IPL Fan Bot that takes your favorite IPL team name as input and uses if-else-if statements to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!'). If the team is not recognized, print 'Team not found!'
#include<stdio.h>
main()
{
	int team;
	
	printf("Welcome to IPL Fan Bot");
	printf("\nChoose your team.");
	printf("\n1.Mumbai Indians");
	printf("\n2.Chennai Super Kings");
	printf("\n3.Gujarat Titans");
	
	printf("\nEnter your team choice:");
	scanf("%d",&team);
	
	if(team==1)
	{
		printf("Go Mumbai Indians.");
	}
	else if(team==2)
	{
		printf("Chennai Super Kings for win.");
	}
	else if(team==3)
	{
		printf("Aava de.");
	}
	else
	{
	    printf("Invalid Choice.");	
	}	
	
}
