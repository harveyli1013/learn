/*
 * @Author: harvey
 * @Date: 2022-10-04 18:28:08
 * @LastEditors: harvey
 * @LastEditTime: 2022-10-04 19:10:52
 * @FilePath: \learn\learnC\05_格式化输入输出\05_02_scanf函数.c
 * @Description:
 */
#include <stdio.h>

void main()
{
  int i, j;
  float x, y;

  // 输入： 1-20.3-4.0e3
  scanf("%d%d%f%f", &i, &j, &x, &y); 
  

  /*
		输出：
		i = 1
		j = -20
		x = 0.300000
		y = -4000.000000
  */
  

  printf("i = %d\n", i);


  printf("j = %d\n", j);

  printf("x = %f\n", x);

  printf("y = %f\n", y);
  
	
	// 格式串中的普通字符
	int a,b;
	scanf("%d/%d",&a, &b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}
