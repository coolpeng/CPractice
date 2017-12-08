//
//  main.c
//  C 003 Function
//
//  Created by Edward on 08/12/2017.
//  Copyright © 2017 coolpeng. All rights reserved.
//
//  函数

#include <stdio.h>

// 2.0 函数声明 (函数声明会告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义)

/*
 2.1 函数声明包括以下几个部分: return_type function_name( parameter list );
 2.2 在函数声明中，参数的名称并不重要，只有参数的类型是必需的;
 2.3 当在一个源文件中定义函数且在另一个文件中调用函数时，函数声明是必需的。在这种情况下，您应该在调用函数的文件顶部声明函数
 */

int maxNum(int, int);

void swapOne(int, int);
void swapTwo(int *, int *);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    // 函数是一组一起执行一个任务的语句
    
    // 3.0 调用函数
    /*
     当程序调用函数时，程序控制权会转移给被调用的函数。被调用的函数执行已定义的任务，当函数的返回语句被执行时，或到达函数的结束括号时，会把程序控制权交还给主程序。
     调用函数时，传递所需参数，如果函数返回一个值，则可以存储返回值
     */
    
    int num = maxNum(10, 30);
    printf("最大的数为: %d\n",num);
    
    
    printf("传值方式调用函数:\n");
    int a = 10;
    int b = 20;
    printf("交换前a的值: %d\n",a);
    printf("交换前b的值: %d\n",b);
    swapOne(a, b);
    printf("交换后a的值: %d\n",a);
    printf("交换后b的值: %d\n",b);
    
    printf("引用方式调用函数:\n");
    int c = 100;
    int d = 200;
    printf("交换前c的值: %d\n",c);
    printf("交换前d的值: %d\n",d);
    
    /* 调用函数来交换值
     * &c 表示指向 c 的指针，即变量 c 的地址
     * &d 表示指向 d 的指针，即变量 d 的地址
     */
    swapTwo(&c, &d);
    printf("交换后c的值: %d\n",c);
    printf("交换后d的值: %d\n",d);
    
    return 0;
}

// 1.0 定义函数

/*
 
 return_type function_name( parameter list )
 {
 body of the function
 }

 
 在 C 语言中，函数由一个函数头和一个函数主体组成。下面列出一个函数的所有组成部分：
 返回类型：一个函数可以返回一个值。return_type 是函数返回的值的数据类型。有些函数执行所需的操作而不返回值，在这种情况下，return_type 是关键字 void。
 函数名称：这是函数的实际名称。函数名和参数列表一起构成了函数签名。
 参数：参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数。
 函数主体：函数主体包含一组定义函数执行任务的语句。
 
 */

int maxNum(int num1, int num2) {
    
    int resultNum;
    
    if (num1 > num2) {
        resultNum = num1;
    }else {
        resultNum = num2;
    }
    return resultNum;
}

// 4.0 函数参数
/*
 如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的形式参数。
 形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。
 当调用函数时，有两种向函数传递参数的方式
 
 调用类型	描述
 传值调用	该方法把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数不会影响实际参数。
 引用调用	通过指针传递方式，形参为指向实参地址的指针，当对形参的指向操作时，就相当于对实参本身进行的操作。
 
 默认情况下，C 使用传值调用来传递参数
 */

// 4.1 传值方式调用函数
void swapOne(int x, int y) {
    
    int tem;
    
    tem = x; /* 保存 x 的值 */
    x = y; /* 把 y 赋值给 x */
    y = tem; /* 把 tem 赋值给 y */
    
    return;
}

// 4.2 引用方式调用函数
void swapTwo(int *x, int *y) {
    
    int tem;
    tem = *x; /* 保存地址 x 的值 */
    *x = *y; /* 把 y 赋值给 x */
    *y = tem; /* 把 tem 赋值给 y */
}





