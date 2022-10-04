#include <stdio.h>

void main(){
	
	int item_number, mm,dd,yyyy;
	float unit_price;
	
	printf("Enter item number:");
	scanf("%d",&item_number);
	
	printf("Enter unit price:");
	scanf("%f",&unit_price);
	
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&mm,&dd,&yyyy);
	
	// 输出
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%.2f\t\t%2.2d/%2.2d/%4d\n",item_number, unit_price,mm,dd,yyyy);
	
}
	
	