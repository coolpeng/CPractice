//
//  main.c
//  C 009 Struct
//
//  Created by Edward on 11/12/2017.
//  Copyright © 2017 coolpeng. All rights reserved.
//
// 结构体

#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

/* 函数声明: 结构作为函数参数 */
void printBookInfo(struct Books book);

void printBook(struct Books *book);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("结构体 !\n");
    
    // 结构是 C 编程中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项
    
    // 1.0 定义结构 (必须使用 struct 语句。struct 语句定义了一个包含多个成员的新的数据类型。)
    
    /*
     
     structure tag 是可选的，每个 member definition 是标准的变量定义，比如 int i; 或者 float f; 或者其他有效的变量定义。在结构定义的末尾，最后一个分号之前，您可以指定一个或多个结构变量，这是可选的。
     
     struct [structure tag]
     {
     member definition;
     member definition;
     ...
     member definition;
     } [one or more structure variables];
     
     */
    
    
    // 1.1 访问结构成员 (使用成员访问运算符（.）。成员访问运算符是结构变量名称和我们要访问的结构成员之间的一个句号。)
    
    struct Books book1; /* 声明 Book1，类型为 Books */
    struct Books book2; /* 声明 Book2，类型为 Books */

    
    /* Book1 详述 */
    strcpy(book1.title, "Hello World");
    strcpy(book1.author, "Edward Peng");
    strcpy(book1.subject, "Programming");
    book1.book_id = 29374;
    
    
    /* Book2 详述 */
    strcpy(book2.title, "Hello");
    strcpy(book2.author, "Edward Peng");
    strcpy(book2.subject, "C Programming ");
    book2.book_id = 123456;

    
    /* 输出 Book1 信息 */
//    printf("Title: %s\nAuthor: %s\nSubjet: %s\nBook_id: %d\n", book1.title,book1.author,book1.subject,book1.book_id);
    
    
    // 1.3 结构作为函数参数 (可以把结构作为函数参数，传参方式与其他类型的变量或指针类似)
    printBookInfo(book1);
    
    // 1.4 指向结构的指针 (可以定义指向结构的指针，方式与定义指向其他类型变量的指针相似)
    struct Books *struct_pointer;

    // 可以在上述定义的指针变量中存储结构变量的地址。为了查找结构变量的地址，请把 & 运算符放在结构名称的前面
    
    struct_pointer = &book2;
    
//    为了使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符
//    struct_pointer -> title;
    
    /* 通过传 Book2 的地址来输出 Book2 信息 */
    printBook(&book2);
    
    return 0;
}

void printBookInfo(struct Books book) {
    
    printf("Title: %s\nAuthor: %s\nSubjet: %s\nBook_id: %d\n", book.title,book.author,book.subject,book.book_id);
}

void printBook(struct Books *book) {
    printf("Title: %s\nAuthor: %s\nSubjet: %s\nBook_id: %d\n", book ->title,book ->author,book ->subject,book ->book_id);
}

































