//
//  main.c
//  C 013 InputOutput
//
//  Created by Edward on 2017/12/11.
//  Copyright © 2017年 coolpeng. All rights reserved.
//
// 输入 & 输出

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("输入 & 输出 !\n");
    
    // 1.0 标准文件 (C 语言把所有的设备都当作文件。所以设备（比如显示器）被处理的方式与文件相同。)
    
    /*
     以下三个文件会在程序执行时自动打开，以便访问键盘和屏幕。
     文件指针是访问文件的方式.
     标准文件       文件指针	设备
     标准输入       stdin     键盘
     标准输出       stdout	屏幕
     标准错误       stderr	您的屏幕
     */
    
    
    // C 语言中的 I/O (输入/输出) 通常使用 scanf() 和  printf()两个函数。\
    scanf() 函数用于从标准输入（键盘）读取并格式化， printf() 函数发送格式化输出到标准输出（屏幕）。
    
    /*
     
     int scanf(const char *format, ...) 函数从标准输入流 stdin 读取输入，并根据提供的 format 来浏览输入。
     int printf(const char *format, ...) 函数把输出写入到标准输出流 stdout ，并根据提供的格式产生输出。
     format 可以是一个简单的常量字符串，但是您可以分别指定 %s、%d、%c、%f 等来输出或读取字符串、整数、字符或浮点数
     
     */
    
    
    /*
     所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
     printf() 用于格式化输出到屏幕。printf() 函数在 "stdio.h" 头文件中声明。
     stdio.h 是一个头文件 (标准输入输出头文件) and #include 是一个预处理命令，用来引入头文件。 当编译器遇到 printf() 函数时，如果没有找到 stdio.h 头文件，会发生编译错误。
     return 0; 语句用于表示退出程序
     
     */
    
    int i = 5;
    printf("%d\n",i); // %d 格式化输出整数
    
//    float f;
//    printf("Enter a number: ");
//    scanf("%f",&f);
//    printf("The num you entered is: %f\n",f); // %f 格式化输出浮点型数据
    
    
    
    // 2.0 getchar() & putchar() 函数
    /*
     int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数。这个函数在同一个时间内只会读取一个单一的字符。可以在循环内使用这个方法，以便从屏幕上读取多个字符。
     int putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符。这个函数在同一个时间内只会输出一个单一的字符。可以在循环内使用这个方法，以便在屏幕上输出多个字符。
     */

//    int a;
//    printf("Enter a value: ");
//    a = getchar();
//    
//    printf("\nYou entered: ");
//    putchar(a);
//    printf("\n");

    
    // 3.0 gets() & puts() 函数
    
    /*
     char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
     int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout。
     */
    
    char str[100];
    printf( "Enter a value :");
    fgets(str, 100, stdin);
    
    printf( "\nYou entered: ");
    fputs(str, stdout);
    
    
    /*
     
     gets()与fgets()
     gets()
     gets函数原型：char*gets(char*buffer);//读取字符到数组：gets(str);str为数组名。
     gets函数功能：从键盘上输入字符，直至接受到换行符或EOF时停止，并将读取的结果存放在buffer指针所指向的字符数组中。
     读取的换行符被转换为null值，做为字符数组的最后一个字符，来结束字符串。
     注意：gets函数由于没有指定输入字符大小，所以会无限读取，一旦输入的字符大于数组长度，就会发生内存越界，
     从而造成程序崩溃或其他数据的错误。
     fgets()
     fgets函数原型：char *fgets(char *s, int n, FILE *stream);//我们平时可以这么使用：fgets(str, sizeof(str), stdin);
     其中str为数组首地址，sizeof(str)为数组大小，stdin表示我们从键盘输入数据。
     fgets函数功能：从文件指针stream中读取字符，存到以s为起始地址的空间里，知道读完N-1个字符，或者读完一行。
     
     考虑到程序安全性和健壮性，建议用fgets()来代替gets()
     */
    
    
    return 0;
}
































