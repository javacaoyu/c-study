# include "stdio.h"

void main(){
    int * prt_num = NULL;   //空指针定义 pointer  ptr

    int num = 9024;
    prt_num = &num;         // num的内存地址 给prt_num 这个指针

    printf("%p\n", prt_num);
    printf("%x\n", prt_num);
    printf("%p\n", &num);
    printf("%x\n", &num);

    /**
    int * p2 = 0061FF28;    // 直接给指针赋值不行， 指针只接受变量， 不接受常量 也就是 &号取出来的
    */
    // %p 表示打印 指针变量, %x 十六进制
    // prt_num = num;          // 这样可以成功，但是表示指针地址是1024了 并不是表示int1024
    // printf("%d\n", prt_num);


    // part 2

    int n = 1024;
    int * pn = &n;

    *pn = 1111;
    printf("N: %d\n", n);
    printf("*pn is: %d\n", *pn);
    // *pn 就是 取指针pn地址对应的空间， 把1111 放进去
    // 等同于 n = 1111; 因为指针pn 指向的n地址，所以 *pn = 1111 等同 n = 1111
    // 指针就是名片，名片记录的地址， 带上* 就是去名片对应的地址， 直接取到了地址对应的空间, 对空间进行操作
    // 总结， *就是取值的意思

    // part 3 指针变量的地址

    int c = 1111;
    int * pc = &c;
    int * ppc = &pc;
    // pc 存放的是变量c的地址，  ppc 存放的是 pc的地址
    // 也就是ppc 存放的是 pc这个指针的地址（不是这个指针的值，这个指针的值记录的是c的地址)
    printf("指针pc的值： %p\n", pc);
    printf("指针pc的地址： %p\n", &pc);
    printf("指针ppc的值（存放的指针pc自身的地址）: %p\n", ppc);

    //但是上面定义是不规范的， 向ppc这样的变量 应该用**定义 如下：
    int ** ppc2 = &pc;
    printf("指针ppc2的值（存放的指针pc自身的地址）: %p\n", ppc2);

    // 通过 ppc2变量如何修改记录的指针地址对应指针指向的空间的内容呢？
    // 就是如何修改（或者说得到） 变量c 的值， 通过ppc2这个**变量
    // 得到：
    printf("ppc2 这个**指针记录的指针地址对应的指针对应的空间的内容是： %d\n", **ppc2);
    // * 是取内容， 对于ppc2这样的指针变量， 一个*取的是ppc2记录的指针的地址， 通过** 才是取到地址后再取这个地址对应的空间

    //拓展, 下面编译不过去:
    /*
    int * ppc3 = &ppc2;
    printf("ppc3 值对应指针的值对应的指针的值对应的空间： %d\n", ***ppc3);
    */

   //拓展 ， 改这样可以：
   int *** ppc3 = &ppc2;
   printf("ppc3 值对应指针的值对应的指针的值对应的空间： %d\n", ***ppc3);

   // 同理 int **** ppc4 = &ppc3;   可以一直套下去， 但是太深咯别这样玩

   // 总结part3
   // 想要 ***xxx  必须定义 xxx为 ***  想要 *****xxx 取值 必须定义xxx 为 *****


}