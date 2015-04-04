#include <stdio.h>
#include <string.h>

///////////////////////////////////////
// 函数
///////////////////////////////////////

// 函数声明语法:
// <返回值类型> <函数名称>(<参数>)

int add_two_ints(int x1, int x2){
	return x1 + x2; // 用return来返回一个值
}

/*
函数是按值传递的。当调用一个函数的时候，传递给函数的参数
是原有值的拷贝（数组除外）。你在函数内对参数所进行的操作
不会改变该参数原有的值。

但是你可以通过指针来传递引用，这样函数就可以更改值

例子：字符串本身翻转
*/

// 类型为void的函数没有返回值
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

// 如果引用函数之外的变量，必须使用extern关键字
int e_i = 0;
void e_testFunc() {
	extern int e_i; // 使用外部变量 i
}

// 使用static确保external变量为源文件私有
static int s_i = 0; // 其他使用 s_testFunc()的文件无法访问变量s_i
void s_testFunc() {
	extern int s_i;
}
//**你同样可以声明函数为static**

int main()
{
	char c[] = "This is a test.";
	str_reverse(c);
	printf("%s\n", c); // => ".tset a si sihT"
	return 0;
}
