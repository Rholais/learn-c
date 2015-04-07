#Fundamental Types

Demonstrating the size of fundamental types and it's use in `printf` function.

##	Recommended Reading Order

1.	[Hello World][hello]
2.	Fundamental Types
3.	[Formatted Output][wprintf]
4.	[Operators][operators]
5.	[Contorl Structures][ctrl]
6.	[Formatted Input][wscanf]
7.	[Array][array]
8.	[Type Casting][cast]
9.	[Pointers][ptr]
10.	[Functions][func]
11.	[User Defined Types and Structs][struct]
12.	[Function Pointer][fp]

##	Platform Infomation

All these codes have been tested by my [Deepin 2014.1 amd64][deepin].

>	$ uname -r  
>	3.13.0-37-generic

>	$ uname -m  
>	x86_64

>	$ make -v  
>	GNU Make 3.81

>	$ gcc -v  
>	gcc version 4.8.2 (Ubuntu 4.8.2-19ubuntu1) 

##	Running Result

>	sizeof(char)	= 1, where it = A  
>	sizeof(int)	= 4, where it = 305419896  
>	sizeof(short)	= 2, where it = 0x1234 = 4660 = 011064  
>	sizeof(long)	= 8, where it = 0x1234567890123456  
>	sizeof(long long)	 = 8, where it = 1311768467284833366  
>	sizeof(float)	= 4, where it = 3.141593  
>	sizeof(double)	= 8, where it = 2.718285  
>	sizeof(a++)	= 4, where a = 1


[hello]: https://github.com/Rholais/learn-c/tree/master/hello "learn-c/hello at master"
[types]: https://github.com/Rholais/learn-c/tree/master/types "learn-c/types at master"
[wprintf]: https://github.com/Rholais/learn-c/tree/master/wprintf "learn-c/wprintf at master"
[operators]: https://github.com/Rholais/learn-c/tree/master/operators "learn-c/operators at master"
[ctrl]: https://github.com/Rholais/learn-c/tree/master/ctrl-structures "learn-c/ctrl-structures at master"
[wscanf]: https://github.com/Rholais/learn-c/tree/master/wscanf "learn-c/wscanf at master"
[array]:  https://github.com/Rholais/learn-c/tree/master/array "learn-c/array at master"
[cast]: https://github.com/Rholais/learn-c/tree/master/cast "learn-c/cast at master"
[ptr]: https://github.com/Rholais/learn-c/tree/master/ptr "learn-c/ptr at master"
[func]: https://github.com/Rholais/learn-c/tree/master/func "learn-c/func at master"
[struct]: https://github.com/Rholais/learn-c/tree/master/struct "learn-c/struct at master"
[fp]: https://github.com/Rholais/learn-c/tree/master/fp "learn-c/fp at master"

[deepin]: http://cdimage.linuxdeepin.com/releases/2014.1/deepin_2014.1_amd64.iso "deepin_2014.1_amd64.iso"
