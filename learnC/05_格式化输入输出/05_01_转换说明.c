/*
 * @Author: harvey
 * @Date: 2022-10-04 16:41:10
 * @LastEditors: harvey
 * @LastEditTime: 2022-10-04 17:47:27
 * @FilePath: \learn\learnC\05_格式化输入输出\05_01_转换说明.c
 * @Description: %m.pX
 */
#include <stdio.h>

void main()
{
  // %m.pX printf()
  float a = 1.0025;
  float b = 478945.12;

  // m指定了要显示的最小字符数量
  printf("a = %10.2f", a); // a =       1.00*
  printf("*\n");

  printf("a = %5.2f", a); // a =  1.00*
  printf("*\n");

  // 负号表示在字符段中靠左对齐
  printf("a = %-10.2f", a); // a = 1.00      *
  printf("*\n");

  printf("a = %-5.2f", a); // a = 1.00 *
  printf("*\n");

  // p表示小数位的精度
  printf("a = %10.5f", a); // a =    1.00250*
  printf("*\n");

  printf("a = %10.6f", a); // a =   1.002500*
  printf("*\n");

  printf("a = %10.7f", a); // a =  1.0025001*
  printf("*\n");

  printf("b = %3.2f", b); // b = 478945.13*
  printf("*\n");

  printf("b = %3.5f", b); // b = 478945.12500*
  printf("*\n");

  // 如果省略p,m和p之间的小数点也要省略
  printf("b = %3.f", b); // b = 478945*
  printf("*\n");

  //
  printf("a = %d", a); // a = -2147483648*
  printf("*\n");

  // 精度p依赖于 X的选择，X表明在显示数值前要对其进行哪种转换
  printf("a = %1.1d", a); // a = -2147483648*
  printf("*\n");

  float c = 0.0000124;
  printf("c = %e", c); // c = 1.240000e-005*
  printf("*\n");

  printf("c = %1.2e", c); // c = 1.24e-005*
  printf("*\n");

  printf("c = %2.3e", c); // c = 1.240e-005*
  printf("*\n");

  // X为g
  // g的转换不显示尾随的0
  printf("c = %g", c); // c = 1.24e-005*
  printf("*\n");

  printf("c = %2.3g", c); // c = 1.24e-005*
  printf("*\n");

  printf("c = %2.0g", c); // c = 1e-005*
  printf("*\n");

  float d = 1.000000;

  printf("d = %2.6g", d); // d =  1*
  printf("*\n");

  // X为d
  int e = 12;

  printf("e = %d", e); // e = 12*
  printf("*\n");

  printf("e = %1.3d", e); // e = 012*
  printf("*\n");

  printf("e = %3.2d", e); // e =  12*
  printf("*\n");

  printf("e = %3.3d", e); // e = 012*
  printf("*\n");

  printf("e = %3.5d", e); // e = 00012*
  printf("*\n");

  printf("e = %.5d", e); // e = 00012*
  printf("*\n");

  printf("e = %9.5d", e); // e =     00012*
  printf("*\n");
}