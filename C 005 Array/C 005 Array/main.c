//
//  main.c
//  C 005 Array
//
//  Created by Edward on 09/12/2017.
//  Copyright © 2017 coolpeng. All rights reserved.
//
// 数组

#include <stdio.h>

void showArraySample();

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    // C 语言支持数组数据结构，它可以存储一个固定大小的相同类型元素的顺序集合。数组是用来存储一系列数据，但它往往被认为是一系列相同类型的变量
    
    // 数组中的特定元素可以通过索引访问
    
    // 所有的数组都是由连续的内存位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素
    
    // 1. 声明数组(要声明一个数组，需要指定元素的类型和元素的数量) \
    这叫做一维数组。arraySize 必须是一个大于零的整数常量，type 可以是任意有效的 C 数据类型
    
    // type arrayName [ arraySize ];
    
    int balance[10]; // 可以容纳 10 个类型的整数
    
    // 2. 初始化数组 \
    可以逐个初始化数组，也可以使用一个初始化语句
    double arrayOne[4] = {0.5, 455, 6.0, 7.5};
    
    // 或者没有指定数组的大小，数组的大小则为初始化时元素的个数
    double arrayTwo[] = {0.5, 455, 6.0, 7.5};
    
    
    // 3. 访问数组元素 \
    数组元素可以通过数组名称加索引进行访问
    double m = arrayOne[0];
    
    // 举例
    showArraySample();
    
    return 0;
}

void showArraySample() {
    
    int numArray[5]; /* numArray 是一个包含 5 个整数的数组 */
    int i,j;
    
    /* 初始化数组元素 */
    for (i = 0; i < 5; i++) {
        numArray[i] = 10+i;
    }
    
    /* 输出数组中每个元素的值 */
    for (j = 0; j < 5; j++) {
        printf("numArray[%d] = %d\n",j,numArray[j]);
    }
}




