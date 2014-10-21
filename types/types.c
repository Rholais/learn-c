#include <stdio.h>

int main()
{
	///////////////////////////////////////
	// 类型
	///////////////////////////////////////

	// 在使用变量之前我们必须先声明它们。
	// 变量在声明时需要指明其类型，而类型能够告诉系统这个变量所占用的空间

	// char型（字符型）变量会占用1个字节
	char x_char = 65;
	char y_char = 'y'; // 字符变量的字面值需要用单引号包住

		// char类型一定会占用1个字节，但是其他的类型却会因具体机器的不同而各异
		// sizeof(T) 可以返回T类型在运行的机器上占用多少个字节 
		// 这样你的代码就可以在各处正确运行了
		// sizeof(obj)返回表达式（变量、字面量等）的尺寸

	printf("sizeof(char)\t= %lu, where it = %c\n", sizeof(char), x_char);

	// int型（整型）变量一般占用4个字节
	int x_int = 0x12345678;
	printf("sizeof(int)\t= %lu, where it = %d\n", sizeof(int), x_int);

	// short型（短整型）变量一般占用2个字节
	short x_short = 0x1234;
	printf("sizeof(short)\t= %lu, where it = 0x%x = %d = 0%o\n", sizeof(short), x_short, x_short, x_short);

	// long型（长整型）一般需要4个字节到8个字节; 而long long型则至少需要8个字节（64位）
	long x_long = 0x1234567890123456;
	printf("sizeof(long)\t= %lu, where it = 0x%lx\n", sizeof(long), x_long);
	long long x_long_long = 0x1234567890123456;
	printf("sizeof(long long)\t = %lu, where it = %lld\n", sizeof(long long), x_long_long);

	// float一般是用32位表示的浮点数字
	float x_float = 3.141593;
	printf("sizeof(float)\t= %lu, where it = %f\n", sizeof(float), x_float);

	// double一般是用64位表示的浮点数字
	double x_double = 2.718285;
	printf("sizeof(double)\t= %lu, where it = %f\n", sizeof(double), x_double);

	// 整数类型也可以有无符号的类型表示。这样这些变量就无法表示负数
	// 但是无符号整数所能表示的范围就可以比原来的整数大一些

	unsigned short ux_short = 0;
	unsigned int ux_int = 0;
	unsigned long long ux_long_long = 0;

	// 单引号内的字符是机器的字符集中的整数。
	'0'; // => 在ASCII字符集中是48
	'A'; // => 在ASCII字符集中是65

	// 如果`sizeof`的参数是一个表达式，那么这个参数不会被演算（VLA例外，见下）
	// 它产生的值是编译期的常数
	int a = 1;
	// size_t是一个无符号整型，表示对象的尺寸，至少2个字节
	size_t size = sizeof(a++); // a++ 不会被演算
	printf("sizeof(a++)\t= %lu, where a = %d\n", size, a);
	// 打印 "sizeof(a++) = 4 where a = 1" （在32位架构上）
	return 0;
}
