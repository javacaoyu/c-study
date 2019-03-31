# include "stdio.h"

// 二维数组和指针
void main(){
    int len = 5;
    int a[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {22,23,24,25,26},
        {31,32,33,34,35}
    };
    int * p = &a[0][0];
    // int (* pp)[3] = a;


    // 方法1 用指针遍历二维数组
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j< len; j++){
            printf("%d, ", *(p + (i * len) + j) );
        }
        printf("\n");
    }

    int ccc = a[4][1];
    printf("%p\n", a[4] + 1);
    printf("%p\n", &ccc);

    printf("%d\n", *(a[4] + 1));
    printf("%d\n", ccc);
    printf("----------------------\n");
    // 如上， 数组如果赋值给int变量， 那么是把value给传递过去了
    // 但是如果单独 比如 a[4] + 1  得到的是 a[4] 的地址 + 1的地址
    // 也就是赋值给int类型，自动帮我们从地址中取出来了值赋值过去， 实际上a[4] + 1 本身得到的是地址
    // s所以printf("%p\n", a[4] + 1); 输出的是地址
    // 那为何 取ccc的地址和 a[4] + 1 不一样呢。 
    // 因为ccc是一个单独的变量，它的地址是ccc变量的地址， 不是a[4] + 1的地址哦。
    // 所以 a[4] + 1 表示的是 a[4][1] 的地址 那么 *(a[4] + 1)  表示取a[4][1]地址的值哦
    // 所以， 遍历二维数组还可以这样  方法2
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j< len; j++){
            printf("%d, ", *(a[i] + j) );
        }
        printf("\n");
    }
    // 同理： 方法3
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j< len; j++){
            printf("%d, ", *( *( a + i) + j) );  // a + i
        }
        printf("\n");
    }
}