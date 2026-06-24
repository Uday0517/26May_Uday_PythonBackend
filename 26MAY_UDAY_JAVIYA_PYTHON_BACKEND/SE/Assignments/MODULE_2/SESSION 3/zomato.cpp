//Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the final price of a Zomato order with a given base price.<br><br><em><strong>Constraint:</strong> The GST rate must not be changeable after its initial assignment.</em>
#include<stdio.h>
main()

{
	int price=1450;
	float const gst=18;
    float total,gst_price;	
	printf("\nwelcome to Zomato");
	printf("\nprice of food:%d",price);
	
	gst_price= price*gst/100;
	
	printf("\namount of gst:%f",gst_price);
	total= price+gst_price;
	printf("\ntotal bill with gst:%f",total);
	
	
}
