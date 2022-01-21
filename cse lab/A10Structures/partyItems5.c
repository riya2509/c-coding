#include <stdio.h>
#define MAX 50 

typedef struct item_details{
	char itemName[30];	//item name
	int quantity;	//item quantity
	float price;	//per item price
	float totalAmount; //total amount = quantity*price
}item;

int main(){
	item thing[MAX]; //structure variable
	int i,choice;
	int count=0;
	float expenses=0.0f;
	
	i=0;
	//infinite loop
	do{
		printf("Enter item details [%2d]:\n",i+1);
		
		printf("Item?  ");		
		gets(thing[i].itemName);
		
		printf("Price? ");
		scanf("%f",&thing[i].price);
		
		printf("Quantity?  ");
		scanf("%d",&thing[i].quantity);
		
		thing[i].totalAmount=(float)thing[i].quantity*thing[i].price;
		expenses += thing[i].totalAmount;

		i++;	//increase loop counter
		count++;//increase record counter
		
		printf("\nWant to take more items (press 1): ");
		scanf("%d",&choice);
		
		getchar();
		
	}while(choice==1);
	
	//print all items
	printf("All details are:\n");
	for(i=0; i<count; i++)
	{
		printf("%-30s\t %.2f \t %3d \n %.2f\n",thing[i].itemName, thing[i].price, thing[i].quantity, thing[i].totalAmount);
	}
	printf("#### Total expense: %.2f\n",expenses);
	
	printf("Want to divide in friends (press 1 for yes): ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("How many friends? ");
		scanf("%d",&i);
		printf("Each friend will have to pay: %.2f\n",(expenses/(float)i));
	}
	
	return 0;
}
