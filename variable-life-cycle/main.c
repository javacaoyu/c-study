# include "stdio.h"
# include "myCounter.h"

int whileCount = 0;         // global variable. life cycle in current source file.

void main(){
    int testExtern = 999;
   counter();
   counter();
   counter();
    int count = counter();  // result 1, because count is a local variable.
    printf("%d\n", count);


    int value = 0;  // 控制for循环次数
    register int i;  // for 循环控制因子 寄存器变量
    int counterRunCount;    // counter函数执行了几次
    printf("请输入要循环几次，输入0或者负数退出\n");
    while(scanf("%d", &value) && value > 0){
        whileCount++;
        for(i = value; i > 0 ; i--)
        {
            counterRunCount = counter2();
        }
        printf("请输入下一次要循环几次，输入0或者负数退出\n");
    }
    printf("counter函数执行了%d次\n", counterRunCount);
}