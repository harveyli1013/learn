#include <stdio.h>

void main(){
	int i,j,k;
	i = j = k = 1;
	
	i += j += k;
	
	printf("%d %d %d\n",i,j,k);
	
	i = 10,j = 5;
	printf("%d", i++ - ++j);
	
	
}