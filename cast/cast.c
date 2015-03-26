#include <stdio.h>
#include <limits.h>

int main()
{
	///////////////////////////////////////
	// 类型转换
	///////////////////////////////////////

	// 在C中每个变量都有类型，你可以将变量的类型进行转换
	// (有一定限制)

	int x_hex = 0x12; // 可以用16进制字面量赋值

	// 在类型转换时，数字本身的值会被保留下来
	printf("%d\n", x_hex); // => 打印 1
	printf("%d\n", (short) x_hex); // => 打印 1
	printf("%d\n", (char) x_hex); // => 打印 1

	// 类型转换时可能会造成溢出，而且不会抛出警告
	printf("%d\n", (char) 257); // => 1 (char的最大值为255，假定char为8位长)

	// 使用<limits.h>提供的CHAR_MAX、SCHAR_MAX和UCHAR_MAX宏可以确定`char`、`signed_char`和`unisigned char`的最大值。

	printf("CHAR_BIT\t= %d\n"
		"SHRT_MIN\t= %d\n"
		"INT_MAX\t= %d\n",
		CHAR_BIT,
		SHRT_MIN,
		INT_MAX);

	// 整数型和浮点型可以互相转换
	printf("%f\n", (float) 100); // %f 格式化单精度浮点
	printf("%lf\n", (double) 100); // %lf 格式化双精度浮点
	printf("%d\n", (char)100.0);

	signed char x = 0xEB;
	if(x == 0xEB)
	{
		x = 0;
	}

	printf("x = %d \n", x);

	return 0;
}
