//
//  main.c
//  C 004 ActionScope
//
//  Created by Edward on 09/12/2017.
//  Copyright © 2017 coolpeng. All rights reserved.
//
// 作用域规则

#include <stdio.h>

// 2. 全局变量(全局变量是定义在函数外部，通常是在程序的顶部。\
全局变量在整个程序生命周期内都是有效的，在任意的函数内部能访问全局变量。)

/* 全局变量声明 */
int g;

int m = 50;

// 3.
int test(int a, int b); // 形参，只声明


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("作用域规则!\n");
    
    // 作用域是程序中定义的变量所存在的区域，超过该区域变量就不能被访问
    
    /*
     C 语言中有三个地方可以声明变量：
     1. 在函数或块内部的局部变量
     2. 在所有函数外部的全局变量
     3. 在形式参数的函数参数定义中
     
     */
    
    
    /* 局部变量声明 */
    int a, b;
    
    /* 实际初始化 */
    a = 10;
    b = 20;
    g = a + b;
    
    printf ("value of a = %d, b = %d and g = %d\n", a, b, g);
    
    // 在程序中，局部变量和全局变量的名称可以相同，但是在函数内，局部变量的值会覆盖全局变量的值
    /* 局部变量声明 */
    int m = 70;
    printf ("value of m = %d\n", m);
    
    
    
    // 3. 函数的参数，形式参数，被当作该函数内的局部变量，它们会优先覆盖全局变量
    int x, y;
    x = 1;
    y = 2;
    
    int z = test(x, y); // 实参，已赋值
    printf("value of z = %d\n", z);
    
    return 0;
}


// 1. 局部变量 (在某个函数或块的内部声明的变量称为局部变量。\
它们只能被该函数或该代码块内部的语句使用。局部变量在函数外部是不可知的)
void localVariable() {
    
    /* 局部变量声明 */
    int a, b;
    int c;
    
    /* 实际初始化 */
    a = 10;
    b = 20;
    c = a + b;
    
    printf ("value of a = %d, b = %d and c = %d\n", a, b, c);
}

int test(int a, int b) {// 形参
    
    return a+b;
}


















