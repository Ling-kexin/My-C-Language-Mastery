/*
 * My First C Program - Hello World
 * 日期: [填写今天日期]
 * 目标: 
 *  1. 理解C程序的基本结构
 *  2. 学习使用#include预处理指令
 *  3. 掌握main()函数的作用
 *  4. 学习使用printf()进行输出
 * 笔记：
 *  - 每个C程序都必须有main()函数，它是程序执行的起点
 *  - #include <stdio.h> 让我们可以使用标准输入输出函数
 *  - \n 是转义字符，表示换行
 */

#include <stdio.h>  // 包含标准输入输出头文件

// main函数是每个C程序的入口点
int main() {
    // 使用printf函数向控制台输出字符串
    printf("Hello, C Language!\n");
    printf("This is my first step in mastering C programming.\n");
    printf("Current date: %s\n", __DATE__);  // 预定义宏，显示编译日期
    
    return 0;  // 返回0表示程序正常退出
}
