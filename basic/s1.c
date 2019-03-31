# include<stdio.h>

int main(){

    int num1 = 123;
    float f = 401.3f;
    int i1 = 1, i2 = 3;
    printf("Hello world! %d", i1);

    printf("你好漂亮%.2f\n", f);

    float f2 = 1234567.89012f;
    printf("Just 7? %f\n", f2);


    double testdouble = 123456.123;
    //一般double 没有后缀，如果加L 就是 long double （不带小数点带L就是long）
    printf("print double %f\n", testdouble);
    printf("print double %lf\n", testdouble);
    printf("print double %.3lf\n", testdouble);
    // Double use %lf to contorl output format.

    long ltt = 123L;
    printf("long: %d", ltt);
    

    printf("\n");

    return 0;
}