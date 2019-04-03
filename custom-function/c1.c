# include "stdio.h"
# include "math.h"

void sum(){
    printf("计算圆面积， 请输入半径;\n");
    double radius;
    const double PI = 3.14;
    scanf("%lf", &radius);
    printf("半径为%lf的圆面积是: %.2lf", radius, PI * pow(radius, 2));
}

void main(){
    sum();
}

void sum();      //函数原型, 必须先定义（类似java 接口）