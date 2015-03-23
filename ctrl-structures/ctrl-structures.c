#include <stdio.h>

int main()
{
	///////////////////////////////////////
	// 控制结构
	///////////////////////////////////////

	if (0) 
	{
		printf("I am never run\n");
	}
	else if (0) 
	{
		printf("I am also never run\n");
	}
	else 
	{
		printf("I print\n");
	}

	// While循环
	int ii = 0;
	while (ii < 10) 
	{ // 任何非0的值均为真
		printf("%d, ", ii++); // ii++ 在取值过后自增
	} // =>  打印 "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "

	printf("\n");

	int kk = 0;
	do 
	{
		printf("%d, ", kk);
	}
	while (++kk < 10); // ++kk 先自增，再被取值
	// => 打印 "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "

	printf("\b\b\n");

	// For 循环
	int jj;
	for (jj = 0; jj < 10; jj++) 
	{
		printf("%d, ", jj);
	} // => 打印 "0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "

	printf("\b\b  \n");

	// 多重分支：switch()
	int some_integral_expression = -1;
	switch (some_integral_expression) 
	{
	case 0: // 标签必须是整数常量表达式
		printf("do_stuff\n");
		break; // 如果不使用break，控制结构会继续执行下面的标签
	case 1:
		printf("do_something_else\n");
		break;
	default:
		// 假设 `some_integral_expression` 不匹配任何标签
		fputs("error!\n", stderr);
		break;
	}
	return 0;
}
