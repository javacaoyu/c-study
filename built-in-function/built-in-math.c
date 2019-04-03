# include "stdio.h"
# include "math.h"

void main(){
    // ceil, 向上取整
    printf("98.1向上取整: %.2lf\n", ceil(98.1));
    printf("-98.0001向上取整: %.2lf\n", ceil(-98.0001));
    // 向上取整嘛，就是向大的走， so -98.1 向上 取整就是向大的走， 就是得到-98 因为-98 > - 98.1
    printf("98.0001向上取整: %.2lf\n", ceil(98.0001));
    printf("12.0向上取整: %.2lf\n", ceil(12.0));

    // floor 向下取整
    printf("33.2 向下取整：%.2lf\n", floor(33.2));

    // sqrt 平方根
    printf("9 平方根: %.2lf\n", sqrt(9));
    printf("10 平方根: %.5lf\n", sqrt(10));

    // 求一个数字的第二个数字次幂
    printf("求5 的 3次方: %.2lf\n", pow(5, 3));   // 125

    // abs 求绝对值 ??? 编译器说没找到abs 方法？
    // printf("-98的绝对值: %.2lf\n", abs(-98));
}