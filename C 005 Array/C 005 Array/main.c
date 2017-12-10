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
void multidimensionalArray();
double getAverage(int arr[], int size);
void arrayAsParam();

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    // C 语言支持数组数据结构，它可以存储一个固定大小的相同类型元素的顺序集合。数组是用来存储一系列数据，但它往往被认为是一系列相同类型的变量
    
    // 数组中的特定元素可以通过索引访问
    
    // 所有的数组都是由连续的内存位置组成。最低的地址对应第一个元素，最高的地址对应最后一个元素
    
    // 1.0 声明数组(要声明一个数组，需要指定元素的类型和元素的数量) \
    这叫做一维数组。arraySize 必须是一个大于零的整数常量，type 可以是任意有效的 C 数据类型
    
    // type arrayName [ arraySize ];
    
    int balance[10]; // 可以容纳 10 个类型的整数
    
    // 1.1 初始化数组 \
    可以逐个初始化数组，也可以使用一个初始化语句
    double arrayOne[4] = {0.5, 455, 6.0, 7.5};
    
    // 或者没有指定数组的大小，数组的大小则为初始化时元素的个数
    double arrayTwo[] = {0.5, 455, 6.0, 7.5};
    
    
    // 1.2. 访问数组元素 \
    数组元素可以通过数组名称加索引进行访问
    double m = arrayOne[0];
    
    // 举例
    showArraySample();
    
    // 2. 多维数组
    multidimensionalArray();
    
    // 3. 传递数组给函数
    arrayAsParam();
    
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

// 2. 多维数组
void multidimensionalArray() {
    
    // 2.1 多维数组声明的一般形式如下
//    type name[size1][size2]...[sizeN];
    
//    下面的声明创建了一个三维 5 . 10 . 4 整型数组
    int threeDim[5][10][4];
    
    // 2.2 二维数组
    /*
    多维数组最简单的形式是二维数组。一个二维数组，在本质上，是一个一维数组的列表。声明一个 x 行 y 列的二维整型数组，形式如下
     */
    
    /* type 可以是任意有效的 C 数据类型，arrayName 是一个有效的 C 标识符。一个二维数组可以被认为是一个带有 x 行和 y 列的表格
    type arrayName [ x ][ y ];
    */
    
    
    // 2.3 初始化二维数组
    
    /*
     
     多维数组可以通过在括号内为每行指定值来进行初始化。下面是一个带有 3 行 4 列的数组
     int a[3][4] = {
        {0, 1, 2, 3} ,   //  初始化索引号为 0 的行
        {4, 5, 6, 7} ,   // 初始化索引号为 1 的行
        {8, 9, 10, 11}   //  初始化索引号为 2 的行
     };
     
     */
    
    // 内部嵌套的括号是可选的，下面的初始化与上面是等同的
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    
    // 2.4 访问二维数组元素
//    二维数组中的元素是通过使用下标（即数组的行索引和列索引）来访问的
    int m = a[2][3];
    printf("a[2][3] = %d\n",m);
    
    /* 一个带有 2 行 3 列的数组 */
    int arrayOne[2][3] = {{0,3,5},{4,6,8}};
    
    /* 输出数组中每个元素的值 */
    for (int i = 0; i < 2; i++) {
       
        for (int j = 0; j < 3; j++) {
            printf("arrayOne[%d][%d] = %d\n",i,j,arrayOne[i][j]);
        }
    }
    
    
    // 备注
    
    /* 2 为该二维数组的行，即数组 arrayTwo 内部的｛｝个数，5为该二维数组的列，即数组 arrayTwo 内部｛｝中元素的个数，该数以多的为基准 */
    int arrayTwo[2][5] = {{3,5,6,7,9},{11,34,65}};
}

// 3. 传递数组给函数
void arrayAsParam() {
    
    // 如果想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针
    /*
     
     方式 1(形式参数是一个指针)
     void myFunc(int *param) {
     
     }
     
     方式 2(形式参数是一个已定义大小的数组)
     void myFunc(int param[5]) {
     
     }
     
     方式 3(形式参数是一个未定义大小的数组)
     void myFunc(int param[]) {
     
     }
     
     */
    
    /* 带有 5 个元素的整型数组 */
    int arrayThree[5] = {5,3,7,19,20};
    
    /* 传递一个指向数组的指针作为参数 */
    double averageNum = getAverage(arrayThree, 5);
    
    /* 输出返回值 */
    printf("数组arrayThree的元素平均值为: %f\n",averageNum);
    
}

// 求数组元素的平均值
// 就函数而言，数组的长度是无关紧要的，因为 C 不会对形式参数执行边界检查
double getAverage(int arr[], int size) {
    
    double avg;
    double sum = 0.0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    avg = sum/size;
    
    return avg;
}















