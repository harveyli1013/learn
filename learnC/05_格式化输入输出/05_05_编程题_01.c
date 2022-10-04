#include <stdio.h>

void main(){
	
	printf("Enter a date (mm/dd/yyyy):");
	int mm,dd,yyyy;
	
	scanf("%d/%d/%d",&mm,&dd,&yyyy);
	
	printf("You entered the date:%4d%2.2d%2.2d",yyyy,mm,dd);
	
}
	
	