<!--
 * @Author: harvey
 * @Date: 2022-10-04 16:10:01
 * @LastEditors: harvey
 * @LastEditTime: 2022-10-04 16:26:36
 * @FilePath: \learn\learnC\05_格式化输入输出\README.md
 * @Description: 格式化输入输出
-->
# 格式化输入输出


## printf函数

### 格式串
该函数被用来显示**格式串**的内容，并且在该串中的指定位置插入可能的值。

`printf(格式串,表达式1,表达式2,....)`


_ _ _


### 转换说明

格式串包含普通字符和**转换说明**；转换说明以`%`开头；

转换说明可以用`%m.pX`或`%-m.pX`；`m`和`p`都是整数常量，`X`是字母，`m`和`p`都是可选的，如果省略`p`，`m`和`X`之间的小数点也要去掉；

`m`为**最小字段宽度(minimum field width)**，表示要显示的最小字符数量；显示值在字段内是右对齐的，在`m`前放一个负号表示左对齐；

`p`的含义很难描述，它依赖于`X`的选择，`X`表明在显示数值前要对其进行哪种转换



```c
#include <stdio.h>

void main()
{
  // %m.pX printf()
  float a = 1.0025;
  float b = 478945.12;

  // m指定了要显示的最小字符数量
  printf("a = %10.2f", a); 	// a =       1.00*
  printf("*\n");

  printf("a = %5.2f", a); 	// a =  1.00*
  printf("*\n");

  // 负号表示在字符段中靠左对齐
  printf("a = %-10.2f", a); // a = 1.00      *
  printf("*\n");

  printf("a = %-5.2f", a); 	// a = 1.00 *
  printf("*\n");

  // p表示小数位的精度
  printf("a = %10.5f", a); 	// a =    1.00250*
  printf("*\n");

  printf("a = %10.6f", a); 	// a =   1.002500*
  printf("*\n");

  printf("a = %10.7f", a); 	// a =  1.0025001*
  printf("*\n");

  printf("b = %3.2f", b); 	// b = 478945.13*
  printf("*\n");

  printf("b = %3.5f", b); 	// b = 478945.12500*
  printf("*\n");

  // 如果省略p,m和p之间的小数点也要省略
  printf("b = %3.f", b); 	// b = 478945*
  printf("*\n");

  //
  printf("a = %d", a); 		// a = -2147483648*
  printf("*\n");

  // 精度p依赖于 X的选择，X表明在显示数值前要对其进行哪种转换
  printf("a = %1.1d", a); 	// a = -2147483648*
  printf("*\n");

  float c = 0.0000124;
  printf("c = %e", c); 		// c = 1.240000e-005*
  printf("*\n");

  printf("c = %1.2e", c); 	// c = 1.24e-005*
  printf("*\n");

  printf("c = %2.3e", c); 	// c = 1.240e-005*
  printf("*\n");

  // X为g
  // g的转换不显示尾随的0
  printf("c = %g", c); 		// c = 1.24e-005*
  printf("*\n");

  printf("c = %2.3g", c); 	// c = 1.24e-005*
  printf("*\n");

  printf("c = %2.0g", c); 	// c = 1e-005*
  printf("*\n");

  float d = 1.000000;

  printf("d = %2.6g", d); 	// d =  1*
  printf("*\n");

  // X为d,这里的p表示十进制数显示的有效位数，不足的在前面补0
  // 精度p依赖于X的选择，X表明在显示数值前要对其进行哪种转换
  int e = 12;

  printf("e = %d", e); 		// e = 12*
  printf("*\n");

  printf("e = %1.3d", e); 	// e = 012*
  printf("*\n");

  printf("e = %3.2d", e); 	// e =  12*
  printf("*\n");

  printf("e = %3.3d", e); 	// e = 012*
  printf("*\n");

  printf("e = %3.5d", e); 	// e = 00012*
  printf("*\n");

  printf("e = %.5d", e); 	// e = 00012*
  printf("*\n");

  printf("e = %9.5d", e); 	// e =     00012*
  printf("*\n");
}

```


_ _ _


### 转移序列

| 转义字符 | 含义 |
|--------|--------|
|   `\n`     |   换行符     |
|   `\a`     |   警报符     |
|   `\t`     |   水平制表符     |
|   `\b`     |   回退符     |



- - -


## scanf函数

scanf函数根据特定的格式读取输入；

寻找数的起始位置时，scanf函数会忽略空白字符串，包括空格，制表符，换页符换行符，因此我们可以把数字放在同一行或者分散在几行内输入；

scanf遵循什么规则来识别整数或浮点数呢？
在要求读入整数时，scanf函数首先寻找正号或负号，然后读取数字直到读到一个非数字时停止。当要求读入浮点数时，scanf函数会寻找一个正好或负号，随后是一串数字（可能包含小数点），再后是一个指数；当scanf函数遇到一个不可能属于当前项的字符时，它会把此字符放回原处，以便在扫描下一个输入项或者下一次调用scanf函数时再次传入；

```c
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

}
```


