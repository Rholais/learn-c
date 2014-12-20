// wscanf.c
 /* This program uses the scanf function
  * to read formatted input.
  */

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main( void )
{

	setlocale(LC_ALL, "zh_CN.UTF-8");

	int   i, result;
	float fp;
	char  c, s[81];
	wchar_t wc, ws[81];
	wprintf(L"按以下顺序输入：\"整型\t浮点型\t字符\t宽字符\t字符串\t宽字符串\"\n");
	result = wscanf( L"%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws ); // C4996
	// Note: scanf and wscanf are deprecated; consider using scanf_s and wscanf_s
	wprintf( L"The number of fields input is %d\n", result );
	wprintf( L"The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);
	
	return 0;
}
