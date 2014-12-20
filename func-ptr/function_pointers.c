#include <stdio.h>
#include <string.h>
#include <stdalign.h>

void str_reverse(char *str_in){
	char tmp;
	unsigned int ii = 0;
	size_t len = strlen(str_in); // `strlen()`` 是C标准库函数
	for (ii = 0; ii < len / 2; ii++){
		tmp = str_in[ii];
		str_in[ii] = str_in[len - ii - 1]; // 从倒数第ii个开始
		str_in[len - ii - 1] = tmp;
	}
}

///////////////////////////////////////
// 函数指针
///////////////////////////////////////
/*
在运行时，函数本身也被存放到某块内存区域当中
函数指针就像其他指针一样（不过是存储一个内存地址） 但却可以被用来直接调用函数,
并且可以四处传递回调函数
但是，定义的语法初看令人有些迷惑

例子：通过指针调用str_reverse
*/
void main() 
{
	char c[] = "This is a test.";
	// 定义一个函数指针 f. 
	void(*f)(char *); // 签名一定要与目标函数相同
	f = str_reverse; // 将函数的地址在运行时赋给指针
	f(c); // 等价于这种调用方式
	printf("%s\n", c); // => ".tset a si sihT"

}

/*
只要函数签名是正确的，任何时候都能将任何函数赋给某个函数指针
为了可读性和简洁性，函数指针经常和typedef搭配使用：
*/

typedef void my_fnp_type(char *);

// 实际声明函数指针会这么用:
// ...
my_fnp_type *g = str_reverse; 
