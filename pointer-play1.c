# include "stdio.h"

void main(){

    int num1 = 1024;
    int num2 = 2000;


    int * p1, * p2;
    p1 = &num1;
    p2 = &num2;

    printf("num1: %d, num2: %d\n", num1, num2);
    printf("num1 address: %p, num2 address: %p\n", p1, p2);

    *p1 = *p2;
    // 等价： num1 = num2;

    printf("num1: %d, num2: %d\n", num1, num2);
    printf("num1 address: %p, num2 address: %p\n", p1, p2);
    printf("p1->value: %d, p2->value: %d \n", *p1, *p2);

    /* output:
        num1: 1024, num2: 2000
        num1: 2000, num2: 2000
        p1->value: 2000, p2->value: 2000
    */

    // part2

    int num3=1111,num4=2222;
    int * p3, * p4;
    p3 = &num3;
    p4 = &num4;

    printf("num3: %d, num4: %d\n", num3, num4);
    printf("num3 address: %p, p3:%p, num4 address: %p, p4:%p\n", &num3, p3, &num4, p4);

    p3 = p4;
    // 等价： num1 = num2;

    printf("num3: %d, num4: %d\n", num3, num4);
    printf("num3 address: %p, p3:%p, num4 address: %p, p4:%p\n", &num3, p3, &num4, p4);
    printf("p3->value: %d, p4->value: %d \n", *p3, *p4);
    printf("num3 value: %d, num4 value: %d", num3, num4);

    /*  output:
        num3: 1111, num4: 2222
        num3 address: 0061FF14, p3:0061FF14, num4 address: 0061FF10, p4:0061FF10
        num3: 1111, num4: 2222
        num3 address: 0061FF14, p3:0061FF10, num4 address: 0061FF10, p4:0061FF10
        p3->value: 2222, p4->value: 2222
    */
    // part2 表示， 把p3 也指向了 num4 的地址
    // 但是不影响num3， 指针是指向， p3从指向num3 改成了指向num4
    // num3值不变， 但是 *p3 取出来的内容就是num4的内容咯
    // 继续

    *p3 = 99999;        // 修改了num4空间的值， p3 p4都指向num4的   num3不变，因为没有指针指它咯
    printf("p3->value: %d, p4->value: %d \n", *p3, *p4);
    printf("num3 value: %d, num4 value: %d", num3, num4);
    /* output
        num3 value: 1111, num4 value: 2222p3->value: 99999, p4->value: 99999
        num3 value: 1111, num4 value: 99999
    */

   // 指针不用就要置空哦
   p1 = NULL;
   p2 = NULL;
   p3 = NULL;
   p4 = NULL;

   // 写指针代码， 最好画图哦，别懵。
   
}