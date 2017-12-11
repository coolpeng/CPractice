//
//  main.c
//  C 012 Typedef
//
//  Created by Edward on 2017/12/11.
//  Copyright © 2017年 coolpeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct Books {
    char title[20];
    char author[20];
    int book_id;
}Book;

#define TRUE 1
#define FALSE 0

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("typedef !\n");
    
    // 1.0 typedef (C 语言提供了 typedef 关键字，您可以使用它来为类型取一个新的名字)
    
    // 为单字节数字定义了一个术语 BYTE
    typedef unsigned char BYTE;
    
//    在这个类型定义之后，标识符 BYTE 可作为类型 unsigned char 的缩写
    BYTE  b1, b2;
    
    
    // 也可以使用 typedef 来为用户自定义的数据类型取一个新的名字。\
    例如，您可以对结构体使用 typedef 来定义一个新的数据类型名字，\
    然后使用这个新的数据类型来直接定义结构变量
    
    
    Book book;
    
    strcpy( book.title, "C Programming");
    strcpy( book.author, "Edward Peng");
    book.book_id = 123;
    printf("%s\n%s\n%d\n",book.title,book.author,book.book_id);
    
    // 2.0 typedef vs #define
   
    /*
     #define 是 C 指令，用于为各种数据类型定义别名，与 typedef 类似，但是它们有以下几点不同
     
     2.1 typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
     2.2 typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
     */
    
    printf( "TRUE 的值: %d\n", TRUE);
    printf( "FALSE 的值: %d\n", FALSE);
    
    return 0;
}

















