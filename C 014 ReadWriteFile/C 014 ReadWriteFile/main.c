//
//  main.c
//  C 014 ReadWriteFile
//
//  Created by Edward on 2017/12/12.
//  Copyright © 2017年 coolpeng. All rights reserved.
//
// 文件读取

#include <stdio.h>

void readFile();

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    // 一个文件，无论它是文本文件还是二进制文件，都是代表了一系列的字节。C 语言不仅提供了访问顶层的函数，也提供了底层（OS）调用来处理存储设备上的文件
    
    // 1.0 打开文件
    
    /*
     
     您可以使用 fopen( ) 函数来创建一个新的文件或者打开一个已有的文件，这个调用会初始化类型 FILE 的一个对象，类型 FILE 包含了所有用来控制流的必要的信息。下面是这个函数调用的原型
     
     FILE *fopen( const char * filename, const char * mode );
     
     filename 是字符串，用来命名文件，访问模式 mode 的值可以是下列值中的一个:
     
     模式	描述
     r	打开一个已有的文本文件，允许读取文件。
     w	打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。
     a	打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
     r+	打开一个文本文件，允许读写文件。
     w+	打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
     a+	打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。
     
     如果处理的是二进制文件，则需使用下面的访问模式来取代上面的访问模式:
     
     "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"
     
     */
    
    // 1.1 关闭文件
    
    /*
     
     关闭文件，请使用 fclose( ) 函数。函数的原型如下：
     
     int fclose( FILE *fp );
     
     如果成功关闭文件，fclose( ) 函数返回零，如果关闭文件时发生错误，函数返回 EOF。这个函数实际上，会清空缓冲区中的数据，关闭文件，并释放用于该文件的所有内存。EOF 是一个定义在头文件 stdio.h 中的常量。
     
     */
    
    // 1.2 写入
    /*
     下面是把字符写入到流中的最简单的函数: 
     int fputc( int c, FILE *fp );
     
     函数 fputc() 把参数 c 的字符值写入到 fp 所指向的输出流中。如果写入成功，它会返回写入的字符，如果发生错误，则会返回 EOF。
     
     函数 fputs() 把字符串 s 写入到 fp 所指向的输出流中。如果写入成功，它会返回一个非负值，如果发生错误，则会返回 EOF。
     int fputs( const char *s, FILE *fp );
     
     也可以使用 int fprintf(FILE *fp,const char *format, ...) 函数来写把一个字符串写入到文件中。
     */
    
    FILE *fp;
    
    fp = fopen("/Users/penglianjin/Desktop/test.txt", "w+");
    fprintf(fp,"%s","This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    
    fclose(fp);
    
    // 1.3 读取文件
    
    /*
     从文件读取单个字符的最简单的函数。
     fgetc() 函数从 fp 所指向的输入文件中读取一个字符。返回值是读取的字符，如果发生错误则返回 EOF。
     int fgetc( FILE * fp );
     
     
     函数 fgets() 从 fp 所指向的输入流中读取 n - 1 个字符。它会把读取的字符串复制到缓冲区 buf，并在最后追加一个 null 字符来终止字符串。
     如果这个函数在读取最后一个字符之前就遇到一个换行符 '\n' 或文件的末尾 EOF，则只会返回读取到的字符，包括换行符。
     
     char *fgets( char *buf, int n, FILE *fp );
     
     也可以使用 int fscanf(FILE *fp, const char *format, ...) 函数来从文件中读取字符串，但是在遇到第一个空格字符时，它会停止读取。
     
     
     */
    
    FILE *f;
    
    char buf[200];
    f = fopen("/Users/penglianjin/Desktop/test.txt", "r");
    fscanf(fp, "%s",buf); // 从文件中读取字符串，但是在遇到第一个空格字符时，它会停止读取
    printf("fscanf: %s\n",buf);
    
    fgets(buf, 200, f);
    printf("fgets: %s\n",buf);
    
    fgets(buf, 200, f);
    printf("fgets: %s\n",buf);
    fclose(f);
    
    /*
     fscanf() 方法只读取了 This，因为它在后边遇到了一个空格。其次，调用 fgets() 读取剩余的部分，直到行尾。最后，调用 fgets() 完整地读取第二行。
     */
    
    return 0;
}

// 1.3
void readFile() {
    
}








