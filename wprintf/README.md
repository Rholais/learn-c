#Formatted Output

Demonstrating the use of `wprintf`.

##	Recommended Reading Order

1.	[Hello World][hello]
2.	[Fundamental Types][types]
3.	Formatted Output

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

>	Integer formats:  
>	   Decimal: -9234  Justified: -009234  Unsigned: 4294958062  
>	Decimal -9234 as:  
>	   Hex: FFFFDBEEh  C hex: 0xffffdbee  Octal: 37777755756  
>	Digits 10 equal: 
>	   Hex: 16  Octal: 8  Decimal: 10  
>	Characters:  
>	         h    h    位    位  
>	Strings:  
>	                 computer  
>	                     comp  
>	   8位变长万国码格式                      8位变  
>	Real numbers:  
>	   251.736600 251.74 2.517366e+02 2.517366E+02  
>	
>	Address as:   0x7fffe6f277a0  



[hello]: https://github.com/Rholais/LearnC/tree/master/hello "LearnC/hello at master"
[types]: https://github.com/Rholais/LearnC/tree/master/types "LearnC/types at master"
[wprintf]: https://github.com/Rholais/LearnC/tree/master/wprintf "LearnC/wprintf at master"

[deepin]: http://cdimage.linuxdeepin.com/releases/2014.1/deepin_2014.1_amd64.iso "deepin_2014.1_amd64.iso"
