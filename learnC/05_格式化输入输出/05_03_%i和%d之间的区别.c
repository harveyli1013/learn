#include <stdio.h>

void main(){
	int a = 011;
	int b = 11;
	
	printf("a = %d\n",a); // 9
	printf("a = %i\n",a); // 9
	
	printf("b = %d\n",b); // 11
	printf("b = %i\n",b); // 11
	
	// 在printf函数中，%i和%都没有区别；
	// 在scanf格式串中，%d只能与十进制整数相匹配；%i可以与八进制、十进制、十六进制的整数匹配；
	int i,j;
	printf("请输入i："); 
	scanf("%i",&i);  // 011 0x11 
	
	printf("请输入j：");
	scanf("%d",&j);  // 011 0x11
	
	printf("i = %i\n",i);  // 9  17
	// 在printf函数中，遇到两个连续的%%，那么它将显示一个%
	printf("j = %d%%\n",j);  // 11 0
}