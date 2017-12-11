//
//  main.c
//  C 010 Union
//
//  Created by Edward on 2017/12/11.
//  Copyright © 2017年 coolpeng. All rights reserved.
//
// 共用体

#include <stdio.h>
#include <string.h>

union DataOne {
    int i;
    float f;
    char str[24];
};

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("共用体 !\n");
    
    // 共用体 (一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。\
    您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。\
    共用体提供了一种使用相同的内存位置的有效方式)
    
    // 1.0 定义共用体 (使用 union 语句，方式与定义结构类似。union 语句定义了一个新的数据类型，带有多个成员。)
    
    /*
    
     每个 member definition 是标准的变量定义，比如 int i; 或者 float f; 或者其他有效的变量定义。在共用体定义的末尾，最后一个分号之前，您可以指定一个或多个共用体变量，这是可选的。
     
     union [union tag]
     {
     member definition;
     member definition;
     ...
     member definition;
     } [one or more union variables];
     */
    
    union Data {
        int i;
        float f;
        char str[20];
    } data;
    
    /*
     
     Data 类型的变量可以存储一个整数、一个浮点数，或者一个字符串。这意味着一个变量（相同的内存位置）可以存储多个多种类型的数据。您可以根据需要在一个共用体内使用任何内置的或者用户自定义的数据类型。
     共用体占用的内存应足够存储共用体中最大的成员。例如，在上面的实例中，Data 将占用 20 个字节的内存空间，因为在各个成员中，字符串所占用的空间是最大的
     */
    
    union DataOne dataOne;
    printf("Memory size occupied by data : %lu\n",sizeof(dataOne));
    
    // 1.1 访问共用体成员 (使用成员访问运算符（.）。成员访问运算符是共用体变量名称和我们要访问的共用体成员之间的一个句号。可以使用 union 关键字来定义共用体类型的变量)
    dataOne.i = 20;
    dataOne.f = 10.5;
    strcpy(dataOne.str, "Edward Peng");
    
    printf("%d\n%f\n%s\n",dataOne.i,dataOne.f,dataOne.str);
    
    
    
    /*
     
     1635214405
     285223185461465317376.000000
     Edward Peng
     
     可以看到共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置，这也是 str 成员能够完好输出的原因
     
     */
    
    
    // 再来看一个相同的实例，这次我们在同一时间只使用一个变量，这也演示了使用共用体的主要目的
    union DataOne anotherData;
    anotherData.i = 20;
    printf("anotherData %d\n",anotherData.i);
    
    anotherData.f = 10.5;
    printf("anotherData %f\n",anotherData.f);

    strcpy(anotherData.str, "Edward Peng");
    printf("anotherData %s\n",anotherData.str);
    
//    所有的成员都能完好输出，因为同一时间只用到一个成员。
    
    
    // 1.3
    /*
     共用体作用
     节省内存，有两个很长的数据结构，不会同时使用，比如一个表示老师，一个表示学生，如果要统计教师和学生的情况用结构体的话就有点浪费了！用共用体的话，只占用最长的那个数据结构所占用的空间，就足够了！
     共用体应用场景
     通信中的数据包会用到共用体:因为不知道对方会发一个什么包过来，用共用体的话就很简单了，定义几种格式的包，收到包之后就可以直接根据包的格式取出数据。
     */
    
    union DataTwo{
        int i;
        float f;
        char str[9];
        double d;
    };
//    共用体所占内存并非是9个char，即9个字节，而是double的两倍，即16个字节，而且每次输出都是它前面离它最近的值

    return 0;
}




















