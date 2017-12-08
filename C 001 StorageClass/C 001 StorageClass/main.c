//
//  main.c
//  C 001 StorageClass
//
//  Created by Edward on 08/12/2017.
//  Copyright © 2017 coolpeng. All rights reserved.
//

// 存储类

#include <stdio.h>

int count;

extern void printCount();

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    // 当有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用
    // extern 是用来在另一个文件中声明一个全局变量或函数
    
    
    /*
     auto 是局部变量的默认存储类, 限定变量只能在函数内部使用；
     register 代表了寄存器变量，不在内存中使用；
     static是全局变量的默认存储类,表示变量在程序生命周期内可见；
     extern 表示全局变量，即对程序内所有文件可见，类似于Java中的public关键字
     */
    
    count = 5;
    printCount();
    return 0;
}
