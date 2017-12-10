//
//  main.c
//  C 008 String
//
//  Created by Edward on 10/12/2017.
//  Copyright © 2017 coolpeng. All rights reserved.
//
// 字符串

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("字符串!\n");
    
    // 在 C 语言中，字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。\
    因此，一个以 null 结尾的字符串，包含了组成字符串的字符。
    
    // 下面的声明和初始化创建了一个 "Hello" 字符串。由于在数组的末尾存储了空字符，\
    所以字符数组的大小比单词 "Hello" 的字符数多一个。
    
    char greetingOne[6] = {'H','e','l','l','o','\0'};
    printf("Greeting message: %lu\n",strlen(greetingOne));
    
    // 依据数组初始化规则，可以把上面的语句写成以下语句
    char greetingTwo[] = "Hello";
    printf("%s\n",greetingTwo);
    
    // 操作字符串的函数
    /*
     
     序号	函数 & 目的
     1	strcpy(s1, s2); 复制字符串 s2 到字符串 s1。
     2	strcat(s1, s2); 连接字符串 s2 到字符串 s1 的末尾。
     3	strlen(s1); 返回字符串 s1 的长度。
     4	strcmp(s1, s2); 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
     5	strchr(s1, ch); 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
     6	strstr(s1, s2); 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
     
     */
    
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    unsigned long len ;
    
    /* 复制 str1 到 str3 */
    strcpy(str3, str1);
    printf("strcpy(str3, str1) :  %s\n", str3);
    
    /*连接str2 到 str 1*/
    strcat(str1, str2);
    printf("strcat(str1, str2):   %s\n", str1);

    /* 连接后，str1 的总长度 */
    len = strlen(str1);
    printf("strlen(str1): %lu\n",len);
    
    char stringOne[] = "def";
    char stringTwo[] = "abc";
    if (strcmp(stringOne, stringTwo) == 0) {
        printf("stringOne 等于 stringTwo\n");
    }else if (strcmp(stringOne, stringTwo) > 0) {
        printf("stringOne 大于 stringTwo\n");
    }else {
        printf("stringOne 小于 stringTwo\n");
    }
    
    // 函数英文全称
    /*
     strcmp: string compare
     strcat: string catenate
     strcpy: string copy
     strlen: string length
     strlwr: string lowercase
     strupr: string upercase
     */
    
    return 0;
}
