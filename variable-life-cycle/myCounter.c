# include "myCounter.h"
# include "stdio.h"

int counter(){
    int count = 0;
    count++;
    return count;
}

extern int whileCount;      // 外部变量，引用其他文件的变量
// extern int testExtern;      // 测试引用main函数内部的局部变量    // 测试失败，无法引用
// 看来extern只能引用全局变量

int counter2(){
    static int count = 0;
    count++;
    printf("main.c中while循环执行到了第%d轮\n", whileCount);
    // printf("main函数中局部变量testExtern 值是%d\n", testExtern);
    return count;
}