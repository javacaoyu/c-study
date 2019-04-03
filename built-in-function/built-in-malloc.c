# include "stdio.h"
# include "stdlib.h"

void main(){
    // malloc 动态分配内存, 用完记得free

    int * p;
    p = (int *)malloc(20);  // 分配20个字节
    // 为指针p 分配了 20个字节的连续空间
    // 这样其实就是把指针p变成了一个数组
    // 因为数组名就是数组的首地址， 这里的指针p，相当于数组名
    // 也就是，这样等价于： int num[5] = {}
    // 因为 一个int 4字节， 20个字节 就是可以存放5个元素的int数组
    // 也可以这样写，更安全 p = (int *)malloc(sizeof(int) * 5)
    int * p2 = (int *)malloc(sizeof(int) * 5);  // 这样好，不犯错，并且不同系统可能int double占用的不一样哟。

    // 为指针对应的数组写入内容
    for(int i = 0; i < 5; i++)
    {
        printf("请输入第%d 个元素: ", i + 1);
        scanf("%d", p + i);
    }

    printf("数组元素为：\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", *(p + i));
    }
    
    // 回收动态分配的内存，并指针置为空
    free(p);
    free(p2);
    p = NULL;   // 别忘咯， 良好的变成习惯
    p2 = NULL;
    // 因为 假设指针指向了别的地方，那么指针原本指向的地方就没有任何引用了。 
    // 那么这个内存就是被浪费了，一直在占用，但谁也找不到
    // 




    // part 2: calloc

    int * p3 = calloc(5, sizeof(int));  // 参数1 多少个空间， 参数2，一个空间大小
    // 等价 int * p3 = (int *)malloc(sizeof(int) * 5)  只是malloc需要强制转化，只接受一个参数就是整体空间大小
    // calloc 不需要强制转化， 并且接受 单位个数(几个元素) 以及一个单位(一个元素)的大小
    // 也就是默认初始化数组

    /*
    malloc 不会初始化数组，也就是数组内的空间没有值，取出来是啥不知道
    calloc 会初始化数组，也就是0， 因为molloc是连续的整个空间，不知道里面具体怎么存放
    而 calloc 也是连续的整个空间，但是空间内部划分了等同的小空间，每个小空间可以存放一个元素，
    so 这样可以为每个元素存放一个初始值
    因为malloc后， 不能确定内部存放多少个元素比如虽然是16空间， 可以存放2个double 也能存放4个int 不确定放啥（所以需要强制转换）
    但是calloc确定哟，传入参数划分内存的时候 比如就知道了是int， 共5个元素

    也就是 malloc 是直接指定总大小，
    calloc 是指定一个元素的大小以及元素个数  进行相乘得到的总大小哟
    */


    free(p3);
    p3 = NULL;  // 同malloc 都需要free并且置指针为空.
    


    // part 3 realloc 重新分配内存 
}