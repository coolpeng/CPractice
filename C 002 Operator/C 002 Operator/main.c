//
//  main.c
//  C 002 Operator
//
//  Created by Edward on 08/12/2017.
//  Copyright © 2017 coolpeng. All rights reserved.
//
// 运算符

#include <stdio.h>

void myFunOne();
void myFunTwo();
void myFunThree();
void myFunFour();
void myFunFive();
void myFunSix();
void myFunSeven();

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
//    myFunOne();
//    myFunTwo();
//    myFunFive();
//    myFunSix();
    
    return 0;
}

// 1.0 算数运算符
void myFunOne(void) {
    
    int a = 29;
    int b = 10;
    int c;
    
    c = a + b;
    printf("c : %d\n",c);
    c = a - b;
    printf("c : %d\n",c);
    c = a * b;
    printf("c : %d\n",c);
    c= a / b;
    printf("c : %d\n",c);
    c = a % b;
    printf("c : %d\n",c);
    c = a++; // 赋值后再加 1 ，c 为 29，a 为 30
    printf("c : %d\n",c);
    c = a--; // 赋值后再减 1 ，c 为 30 ，a 为 29
    printf("c : %d\n",c);
    
    // m++ 与++m 的区别
    printf("先赋值后运算\n");
    int m = 10;
    int n;
    
    n = m++;
    printf("n = %d\nm =%d\n",n,m);
    
    m = 10;
    n = m--;
    printf("n = %d\nm =%d\n",n,m);

    printf("先运算后赋值\n");
    
    m = 10;
    n = ++m;
    printf("n = %d\nm =%d\n",n,m);

    m = 10;
    n = --m;
    printf("n = %d\nm =%d\n",n,m);
}

// 2.0 关系运算符
void myFunTwo(void) {
    
    int a = 10;
    int b = 20;
    
    if (a == b) {
        printf("Line 1 - %d 等于 %d\n",a,b );
    }else {
        printf("Line 1 - %d 不等于 %d\n",a,b);
    }
    
    if ( a < b ) {
        printf("Line 2 - %d 小于 %d\n",a,b);
    }else {
        printf("Line 2 - %d 不小于 %d\n",a,b);
    }
    
    if ( a > b ) {
        printf("Line 3 - %d 大于 %d\n",a,b);
    }else {
        printf("Line 3 - %d 不大于 %d\n",a,b);
    }
    
    if (a <= b) {
        printf("Line 2 - %d 小于或等于 %d\n",a,b);
    }
    
    if (b >= a) {
        printf("Line 2 - %d 大于或等于 %d\n",b,a);
    }
}

// 3.0 逻辑运算符
void myFunThree(void) {
    
    int a = 5;
    int b = 20;
    
    if ( a && b )
    {
        printf("Line 1 - 条件为真\n" );
    }
    if ( a || b )
    {
        printf("Line 2 - 条件为真\n" );
    }
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if ( a && b )
    {
        printf("Line 3 - 条件为真\n" );
    }
    else
    {
        printf("Line 3 - 条件不为真\n" );
    }
    if ( !(a && b) )
    {
        printf("Line 4 - 条件为真\n" );
    }
}


// 4.0 位运算符
// 下表显示了 C 语言支持的位运算符。假设变量 A 的值为 60，变量 B 的值为 13，则

/*
 
 运算符                    描述                                      实例
 &	如果同时存在于两个操作数中，二进制 AND 运算符复制一位到结果中。	(A & B) 将得到 12，即为 0000 1100
 |	如果存在于任一操作数中，二进制 OR 运算符复制一位到结果中。	(A | B) 将得到 61，即为 0011 1101
 ^	如果存在于其中一个操作数中但不同时存在于两个操作数中，二进制异或运算符复制一位到结果中。	(A ^ B) 将得到 49，即为 0011 0001
 ~	二进制补码运算符是一元运算符，具有"翻转"位效果，即0变成1，1变成0。	(~A ) 将得到 -61，即为 1100 0011，一个有符号二进制数的补码形式。
 <<	二进制左移运算符。左操作数的值向左移动右操作数指定的位数。	A << 2 将得到 240，即为 1111 0000
 >>	二进制右移运算符。左操作数的值向右移动右操作数指定的位数。	A >> 2 将得到 15，即为 0000 1111
 
 */

void myFunFour(void) {
    
    unsigned int a = 60;    /* 60 = 0011 1100 */
    unsigned int b = 13;    /* 13 = 0000 1101 */
    int c = 0;
    
    c = a & b;       /* 12 = 0000 1100 */
    printf("Line 1 - c 的值是 %d\n", c );
    
    c = a | b;       /* 61 = 0011 1101 */
    printf("Line 2 - c 的值是 %d\n", c );
    
    c = a ^ b;       /* 49 = 0011 0001 */
    printf("Line 3 - c 的值是 %d\n", c );
    
    c = ~a;          /*-61 = 1100 0011 */
    printf("Line 4 - c 的值是 %d\n", c );
    
    c = a << 2;     /* 240 = 1111 0000 */
    printf("Line 5 - c 的值是 %d\n", c );
    
    c = a >> 2;     /* 15 = 0000 1111 */
    printf("Line 6 - c 的值是 %d\n", c );
}

// 5.0 赋值运算符
/*
 
 运算符	描述	实例
 =	简单的赋值运算符，把右边操作数的值赋给左边操作数	C = A + B 将把 A + B 的值赋给 C
 +=	加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数	C += A 相当于 C = C + A
 -=	减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数	C -= A 相当于 C = C - A
 *=	乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数	C *= A 相当于 C = C * A
 /=	除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数	C /= A 相当于 C = C / A
 %=	求模且赋值运算符，求两个操作数的模赋值给左边操作数	C %= A 相当于 C = C % A
 <<=	左移且赋值运算符	C <<= 2 等同于 C = C << 2
 >>=	右移且赋值运算符	C >>= 2 等同于 C = C >> 2
 &=	按位与且赋值运算符	C &= 2 等同于 C = C & 2
 ^=	按位异或且赋值运算符	C ^= 2 等同于 C = C ^ 2
 |=	按位或且赋值运算符	C |= 2 等同于 C = C | 2
 
 */

void myFunFive(void) {
    int a = 21;
    int c ;
    
    c =  a;
    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );
    
    c +=  a;
    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );
    
    c -=  a;
    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );
    
    c *=  a;
    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );
    
    c /=  a;
    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );
    
    c  = 200;
    c %=  a;
    printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c );
    
    c <<=  2;
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );
    
    c >>=  2;
    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );
    
    c &=  2;
    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );
    
    c ^=  2;
    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );
    
    c |=  2;
    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );
}

// 6.0 杂项运算符 ↦ sizeof & 三元

/*
 运算符	描述	实例
 sizeof()	返回变量的大小。	sizeof(a) 将返回 4，其中 a 是整数。
 &	返回变量的地址。	&a; 将给出变量的实际地址。
 *	指向一个变量。	*a; 将指向一个变量。
 ? :	条件表达式	如果条件为真 ? 则值为 X : 否则值为 Y
 
 */
void myFunSix(void) {
    
    int a = 4;
    short b;
    double c;
    int* ptr;
    
    /* sizeof 运算符实例 */
    printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a) ); // 4
    printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b) ); // 2
    printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c) ); // 8
    
    /* & 和 * 运算符实例 */
    ptr = &a;    /* 'ptr' 现在包含 'a' 的地址 */
    printf("a 的值是 %d\n", a);
    printf("*ptr 是 %d\n", *ptr);
    printf("ptr 是 %p\n", ptr);
    
    /* 三元运算符实例 */
    a = 1;
    b = (a == 1) ? 20: 30;
    printf( "b 的值是 %d\n", b );
    
    b = (a == 10) ? 20: 30;
    printf( "b 的值是 %d\n", b );
}

// 7.0 C 中的运算符优先级

// 下表将按运算符优先级从高到低列出各个运算符，\
具有较高优先级的运算符出现在表格的上面，具有较低优先级的运算符出现在表格的下面

/*
 
 类别 	运算符                                结合性
 后缀 	() [] -> . ++ - -                   从左到右
 一元 	+ - ! ~ ++ - - (type)* & sizeof 	从右到左
 乘除 	* / %           从左到右
 加减 	+ -             从左到右
 移位 	<< >>           从左到右
 关系 	< <= > >=       从左到右
 相等 	== != 	从左到右
 位与 AND 	& 	从左到右
 位异或 XOR 	^ 	从左到右
 位或 OR 	| 	从左到右
 逻辑与 AND 	&& 	从左到右
 逻辑或 OR 	|| 	从左到右
 条件 	?:                                  从右到左
 赋值 	= += -= *= /= %=>>= <<= &= ^= |= 	从右到左
 逗号 	, 	从左到右
 
 */

void myFunSeven(void) {
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;
    
    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    printf("(a + b) * c / d 的值是 %d\n",  e );
    
    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    printf("((a + b) * c) / d 的值是 %d\n" ,  e );
    
    e = (a + b) * (c / d);   // (30) * (15/5)
    printf("(a + b) * (c / d) 的值是 %d\n",  e );
    
    e = a + (b * c) / d;     //  20 + (150/5)
    printf("a + (b * c) / d 的值是 %d\n" ,  e );
}


