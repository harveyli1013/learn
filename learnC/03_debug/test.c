/*
 * @Author: harvey
 * @Date: 2022-10-04 00:09:12
 * @LastEditors: harvey
 * @LastEditTime: 2022-10-04 16:45:59
 * @FilePath: \learn\learnC\03_debug\test.c
 * @Description:
 */
#include <stdio.h>

int main()
{

  int a = 5;
  int b = 6;
  int c;
  // scanf("%d", &c);
  int t;
  t = a;
  a = c;
  b = t;
  printf("a=%d,b=%d\n", a, b);
  return 0;
}
