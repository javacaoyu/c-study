# include "stdio.h"

void main(){
    // 数组存放的是连续的内存空间
    // 指针是地址， 数组的数组名（数组变量）就是这个数组(连续内存空间)的首地址

    double score[5] = {1,2,3,4,5};
    printf("数组的首地址: %p\t数组首元素地址: %p\n", score, &score[0]);
    // output: 数组的首地址: 0028FF10  数组首元素地址: 0028FF10
    // 证明， 数组首地址 就是数组名的内容

    double * p_score ;
    p_score = &score[0];
    // p_score = score; 等同 p_score = &score[0];

    printf("指针的内容： %p\n", p_score);
    printf("指针对应地址内容： %.2lf\n", *p_score);
    // 取得是 数组第一个元素
    // 用指针for循环取数组内容
    // 方法1
    for(int i = 0; i < 5; i++)
    {
        printf("第%d个元素值（用指针取）:%.2lf\n", i+1, *p_score++);
        // *p_score  先取p_score的内容， 然后在++
        // 指针的 ++ 不是int的++， int的++是 +1 指针的++ 是在内存地址上向下一个地址移动一次
        // 一次移动多少是取决于数据的类型， 如double 一次++ 移动8个字节, 如 下面输出p_score的值
        printf("%p, 一个doubue移动:%d\n", p_score, sizeof(score[i]));
    }


    // 玩一个：方法2
    p_score = &score[0];    // p_score = score; 等同 p_score = &score[0];
    // 先把数组首地址赋值给指针（上面for循环指针++了 变位置咯)
    for(int i = 0; i < 5; i++)
    {
        printf("%.2lf, ", p_score[i]);
        // 这样也能循环得到数组的每个元素，因为 数组名：score 本身就是存放的数组首地址，也就是等价是一个指针
        // 那么循环score[i] 可以， 同理 p_score[i] 也是可以的
    }
    printf("\n");
    // 在玩一个：方法3
    for(int i = 0; i < 5; i++)
    {
        printf("%.2lf, ", *(p_score + i));
        // 指针 + i  比如 指针+1 就等同指针++， 虽然加的是1 ， 但是表示是进1个数据类型位， 也就是
        // 比如p_sore 这个指针，是double， +1 就是进一个double位 就是进8位哦。
        // 同理 p_socre + 2   就是 进16位哦
        // 循环结束， p_score不变哦。 因为没有赋值回自己，  不是++哦
        // 数组名 也可以 ++ 或者 + n  同指针++ +n
    }
    printf("\n");
    

    /*
        推荐使用方法3， 或者直接用 数组变量取，
        也就是不要使用方法1， 因为 指针自身++了， 指针指向发生变化， 容易产生异常问题。
        特别，for循环或者其他没控制好， 很容易让指针指向其他区域（未知区域)
        比如试一下： p_score = p_score + 100;
    */
    p_score = p_score + 100;
    printf("试一下让指针进100位， 内容是： %lf", *p_score);
    
}