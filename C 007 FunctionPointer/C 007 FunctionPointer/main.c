//
//  main.c
//  C 007 FunctionPointer
//
//  Created by Edward on 10/12/2017.
//  Copyright © 2017 coolpeng. All rights reserved.
//
// 函数指针与回调函数

#include <stdio.h>
#include <stdlib.h>

int max(int x, int y) {
    return x > y ? x : y;
}


void create_array(int *array, size_t size, int (*getNextValue)());
int getRandomValue(void);



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    // 1.0 函数指针 (函数指针是指向函数的指针变量)
    
    // 通常我们说的指针变量是指向一个整型、字符型或数组等变量，而函数指针是指向函数。\
    函数指针可以像一般函数一样，用于调用函数、传递参数
    
    // 函数指针变量的声明
    
    // typedef int (*fun_ptr)(int,int); // 声明一个指向同样参数、返回值的函数指针类型
    
    /* p 是函数指针 */
    int (* ptr) (int, int) = & max; // &可以省略
    
    
    int a = 10;
    int b = 20;
    int c = 5;
    
    int d = max(max(a, b), c);
    printf("d = %d\n",d);

    /* 与直接调用函数等价，d = max(max(a, b), c) */
    int e = ptr(ptr(a,b),c);
    printf("e = %d\n",e);
    
    
    // 2.0 回调函数 (函数指针作为某个函数的参数)
    // 函数指针变量可以作为某个函数的参数来使用的，回调函数就是一个通过函数指针调用的函数。\
    简单讲：回调函数是由别人的函数执行时调用你实现的函数。
    
    int array[10];
    create_array(array, 10, getRandomValue);
    
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = %d\n",i,array[i]);
    }
    
    return 0;
}

/*
 size_t 是一种数据类型，近似于无符号整型，但容量范围一般大于 int 和 unsigned。这里使用 size_t 是为了保证 array 变量能够有足够大的容量来储存可能大的数组。
 但凡不涉及负值范围的表示size取值的，都可以用size_t；比如array[size_t]
 */
void create_array(int *array, size_t size, int (*getNextValue)(void)) {
    
    for (size_t i = 0; i < size; i++) {
        array[i] = getNextValue();
    }
}

// 回调函数 获取随机值
int getRandomValue(void) {
    return rand();
}







