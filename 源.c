#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

				C代码（文本文件）										二进制信息（2进制文件）
				test.c(源文件/源程序)				 - >					test.exe  - >运行
	编译(编译器) - >	 翻译环境  < - 链接(链接器)							运行环境
					test.obj

		test.c																									test.exe
		翻译环境																								运行环境
 编译(编译器)																		 |			链接(链接器)			
																			   	 目标文件
 Ⅰ.预编译/预处理						 Ⅱ.编译					 Ⅲ.汇编
 test.c							  test.i				      test.s
 1.#include 头文件的包含				1.语法分析
 2.注释的删除，使用空格替换			2.词法分析
 3.#difene的直接替换MAX->100			3.语义分析
		文本操作								4.符号汇总
							   	 把c语言代码翻译成汇编代码