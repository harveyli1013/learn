#include <stdio.h>

void main(){
	
	int a,b,c;
	
	printf("Enter a number [(xxx) xxx-xxxx]:");
	
	scanf("(%d) %d-%d",&a,&b,&c);
	
	printf("%3.3d.%3.3d.%4.4d",a,b,c);
	
}
	
	