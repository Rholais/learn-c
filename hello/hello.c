// 单行注释以//开始。（仅适用于C99或更新的版本。）

/*
多行注释是这个样子的。（C89也适用。）
*/

// 用#include来导入头文件
#include <stdio.h>

// 你的程序的入口是一个返回值为 int 关键字的 main 函数
int main()
{
  // 用 printf 打印到标准输出，可以设定格式，
  printf("Hello World!\n");
  
  printf("\nC语言的字符串两边用双引号\"...\"\n");
  printf("如果需要输出双引号\"，需要在\"前面加\\\n");
  printf("其中反斜杠\\为转意符，其后配合字母、符号可以输出特殊字符。\n");
  printf("如果需要输出反斜杠\\，在字符串内要写作\\\\\n");
  printf("\\n为换行符。\n这里另起一行了\n");
  printf("另一个\t重要\tsymbol\t是\t制表符\\t\n");
  printf("它\t可以\t使\t输出\t变得\t整齐\n\n");
  printf("其他常用特殊字符：\n");
  printf("\\\'\t单引号\'\n");
  printf("\\0\t(null)，字符串结尾标示符\n");
  printf("\\\?\t问号\?\n");
  // REMEMBER: a backspace sign can ONLY 
  // move the cursor in the current line.
  printf("\\b\t退格符(backspace)\n");
  printf("\\r\t回车符(return)\n");
  //返回使用 return 关键字
  return 0;
}
