// wprintf.c
// This program uses the wprintf function
// to produce formatted output.

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main( void )
{

	setlocale(LC_ALL, "zh_CN.UTF-8");

	char ch	= 'h', 
		*string	= "computer";
	wchar_t wch	= L'位', 
		*wstring	= L"8位变长万国码格式";
	int count	= -9234;
	double fp	= 251.7366;

	// Display integers
	wprintf( L"Integer formats:\n"
		L"   Decimal: %d  Justified: %.6d  "
		L"Unsigned: %u\n",
		count, count, count );

	// Display decimals
	wprintf( L"Decimal %d as:\n   Hex: %Xh  "
		L"C hex: 0x%x  Octal: %o\n",
		count, count, count, count );

	// Display in different radixes
	wprintf( L"Digits 10 equal:\n   Hex: %i  "
		L"Octal: %i  Decimal: %i\n",
		0x10, 010, 10 );

	// Display characters
	wprintf(L"Characters:\n"
		L"%10c%5hc%5C%5lc\n",
		ch, ch, wch, wch);

	// Display strings

	wprintf(L"Strings:\n%25s\n"
		L"%25.4hs\n   %S%25.3ls\n",
		string, string, wstring, wstring);

	// Display real numbers
	wprintf(L"Real numbers:\n   %f %.2f %e %E\n",
		fp, fp, fp, fp );

	// Display pointer
	wprintf( L"\nAddress as:   %p\n", &count);
	
	return 0;
}
