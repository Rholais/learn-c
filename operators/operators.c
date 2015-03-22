#include <stdio.h>

int main()
{
	///////////////////////////////////////
	// 操作符
	///////////////////////////////////////

	// 多个变量声明的简写
	int i1 = 1, i2 = 2;
	float f1 = 1.0, f2 = 2.0;

	int s_a, s_b, s_c;
	s_a = s_b = s_c = 0;

	// 算数运算直截了当
	printf("i1 = %d;\ni2 = %d;\ni1 + i2 = %d;\ni1 - i2 = %d;\ni1 * i2 = %d;\ni1 / i2 = %d;\nf1 / f2 = %f;\n",
		i1,
		i2,
		i1 + i2, // => 3
		i1 - i2, // => -1
		i1 * i2, // => 2
		i1 / i2, // => 0 (0.5，但会被化整为 0)
		
		f1 / f2); // => 0.5, 也许会有很小的误差
		// 浮点数和浮点数运算都是近似值

	// 取余运算
	printf("11 %% 3 = %d;\n", (11 % 3)); // => 2

	// 你多半会觉得比较操作符很熟悉, 不过C中没有布尔类型
	// 而是用整形替代
	// (C99中有_Bool或bool。)
	// 0为假, 其他均为真. (比较操作符的返回值总是返回0或1)
	3 == 2; // => 0 (false)
	3 != 2; // => 1 (true)
	3 > 2; // => 1
	3 < 2; // => 0
	2 <= 2; // => 1
	2 >= 2; // => 1

	// C不是Python —— 连续比较不合法
	int c_a = 1;
	int between_0_and_2 = 0;
	// 错误
	between_0_and_2 = 0 < c_a < 2;
	// 正确
	between_0_and_2 = 0 < c_a && c_a < 2;

	// 逻辑运算符适用于整数
	!3; // => 0 (非)
	!0; // => 1
	1 && 1; // => 1 (且)
	0 && 1; // => 0
	0 || 1; // => 1 (或)
	0 || 0; // => 0

	// 条件表达式 （ ? : ）
	int i_a = 5;
	int i_b = 10;
	int z;
	z = (i_a > i_b) ? i_a : i_b; //  10 “若a > b返回a，否则返回b。”

	// 增、减
	char *s = "iLoveC";
	int j = 0;
	s[j++]; // "i" 返回s的第j项，然后增加j的值。
	j = 0;
	s[++j]; // => "L"  增加j的值，然后返回s的第j项。
	// j-- 和 --j 同理

	// 位运算
	~0x0F; // => 0xF0 (取反)
	0x0F & 0xF0; // => 0x00 (和)
	0x0F | 0xF0; // => 0xFF (或)
	0x04 ^ 0x0F; // => 0x0B (异或)
	0x01 << 1; // => 0x02 (左移1位)
	0x02 >> 1; // => 0x01 (右移1位)

	// 对有符号整数进行移位操作要小心 —— 以下未定义：
	// 有符号整数位移至符号位 int a = 1 << 32
	// 左移位一个负数 int a = -1 << 2
	// 移位超过或等于该类型数值的长度
	// int a = 1 << 32; // 假定int32位
	return 0;
}