#include <stdio.h>

int main()
{
	// 数组必须要被初始化为具体的长度
	char my_char_array[20] = {'\0'}; // 这个数组占据 1 * 20 = 20 个字节
	int my_int_array[20] = {0}; // 这个数组占据 4 * 20 = 80 个字节
	// (这里我们假设字长为4)


	// 可以用下面的方法把数组初始化为0:
	char my_array[20] = { 0 };

	// 索引数组和其他语言类似 -- 好吧，其实是其他的语言像C
	my_array[0]; // => 0

	// 数组是可变的，其实就是内存的映射！
	my_array[1] = 2;
	printf("%d\n", my_array[1]); // => 2

	// 在C99 （C11中是可选特性），变长数组（VLA）也可以声明长度。
	// 其长度不用是编译期常量。
	printf("Enter the array size: "); // 询问用户数组长度

	size_t size = 0;
	scanf("%lu", &size);
	int var_length_array[size]; // 声明VLA
	printf("sizeof array = %lu\n", sizeof var_length_array);

	// 上述程序可能的输出为：
	// > Enter the array size: 10
	// > sizeof array = 40

	// 字符串就是以 NUL (0x00) 这个字符结尾的字符数组,
	// NUL可以用'\0'来表示.
	// (在字符串字面量中我们不必输入这个字符，编译器会自动添加的)
	char a_string[20] = "This is a string";
	printf("%s\n", a_string); // %s 可以对字符串进行格式化
	/*
	也许你会注意到 a_string 实际上只有16个字节长.
	第17个字节是一个空字符(NUL)
	而第18, 19 和 20 个字符的值是未定义。
	*/

	printf("%d\n", a_string[16]); // => 0
	//  byte #17值为0（18，19，20同样为0）

	// 单引号间的字符是字符字面量
	// 它的类型是`int`，而 *不是* `char`
	// （由于历史原因）
	int cha = 'a'; // 合法
	char chb = 'a'; // 同样合法 (隐式类型转换

	// 多维数组
	int multi_array[2][5] = {
			{ 1, 2, 3, 4, 5 },
			{ 6, 7, 8, 9, 0 }
	};
	// 获取元素
	int array_int = multi_array[0][2]; // => 3
	return 0;
}
