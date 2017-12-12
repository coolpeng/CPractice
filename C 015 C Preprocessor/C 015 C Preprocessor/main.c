//
//  main.c
//  C 015 C Preprocessor
//
//  Created by Edward on 2017/12/12.
//  Copyright © 2017年 coolpeng. All rights reserved.
//
// C 预处理器

// 指令告诉 CPP 从系统库中获取 stdio.h，并添加文本到当前的源文件中。
#include <stdio.h>


//这个指令告诉 CPP 把所有的 MAX_HEIGHT 替换为 10。\
使用 #define 定义常量来增强可读性。
#define MAX_HEIGHT 10


// 这个指令告诉 CPP 取消已定义的 FILE_SIZE，并定义它为 42。
#undef  FILE_SIZE
#define FILE_SIZE 42


// 这个指令告诉 CPP 只有当 MESSAGE 未定义时，才定义 MESSAGE。
#ifndef MESSAGE
#define MESSAGE "You wish!\n"
#endif


// 这个指令告诉 CPP 如果定义了 DEBUG，则执行处理语句。在编译时，\
如果您向 gcc 编译器传递了 -DDEBUG 开关量，这个指令就非常有用。\
它定义了 DEBUG，您可以在编译期间随时开启或关闭调试。
#ifdef DEBUG
/* Your debugging statements here */
#endif


#define friend_name(a, b) printf( #a " and " #b " are my friends\n");

#define tokenpaster(n) printf ("token" #n " = %d\n", token##n)

#if !defined (MESSAGE)
    #defined MESSAGE "Hello Edward"
#endif


#define MAX_NUM(x, y) (x > y ? x : y)


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("C 预处理器 !\n");
    
    // C 预处理器不是编译器的组成部分，但是它是编译过程中一个单独的步骤。\
    简言之，C 预处理器只不过是一个文本替换工具而已，它们会指示编译器在实际编译之前完成所需的预处理。
    
    /*
     所有的预处理器命令都是以井号（#）开头。它必须是第一个非空字符，为了增强可读性，预处理器指令应从第一列开始。下面列出了所有重要的预处理器指令
     指令	描述
     #define	定义宏
     #include	包含一个源代码文件
     #undef	取消已定义的宏
     #ifdef	如果宏已经定义，则返回真
     #ifndef	如果宏没有定义，则返回真
     #if	如果给定条件为真，则编译下面代码
     #else	#if 的替代方案
     #elif	如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码
     #endif	结束一个 #if……#else 条件编译块
     #error	当遇到标准错误时，输出错误消息
     #pragma	使用标准化方法，向编译器发布特殊的命令到编译器中
     
     */
    
    
    // 1.0 预定义宏
    
    /*
     
     ANSI C 定义了许多宏。在编程中可以使用这些宏，但是不能直接修改这些预定义的宏。
     
     宏              描述
     __DATE__	当前日期，一个以 "MMM DD YYYY" 格式表示的字符常量。
     __TIME__	当前时间，一个以 "HH:MM:SS" 格式表示的字符常量。
     __FILE__	这会包含当前文件名，一个字符串常量。
     __LINE__	这会包含当前行号，一个十进制常量。
     __STDC__	当编译器以 ANSI 标准编译时，则定义为 1。
     
     */
    
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
    
    
    // 2.0 预处理器运算符
    
    // 2.1 宏延续运算符（\）(一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）。)
    
    // 2.2 字符串常量化运算符（#）() (在宏定义中，当需要把一个宏的参数转换为字符串常量时，\
    则使用字符串常量化运算符（#）。在宏中使用的该运算符有一个特定的参数或参数列表。)
    friend_name("xiaoming", "xiaowang");
    
    // 2.3 标记粘贴运算符（##）(宏定义内的标记粘贴运算符（##）会合并两个参数。\
    它允许在宏定义中两个独立的标记被合并为一个标记。)
    
    int token34 = 40;
    tokenpaster(34);
    
    
    // 2.4 defined() 运算符
    /*
     
     预处理器 defined 运算符是用在常量表达式中的，用来确定一个标识符是否已经使用 #define 定义过。如果指定的标识符已定义，则值为真（非零）。如果指定的标识符未定义，则值为假（零）。
     */
    
    printf("The message is : %s", MESSAGE);
    
    
    // 3.0 参数化的宏 (CPP 一个强大的功能是可以使用参数化的宏来模拟函数)
    
    /*
     
     int square(int x) {
     return x * x;
     }
     
     我们可以使用宏重写上面的代码
     
     #define square(x) ((x) * (x))
     
     */
    
    printf("两者最大的数是: %d\n",MAX_NUM(10,11));
    
    
    return 0;
}
