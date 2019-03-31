# include "stdio.h"


# define N 50
# define LEN(x) sizeof(x) / sizeof(x[0])    // 定义一个方法LEN 计算数组长度
# define DEFAULT_LENGTH 5

void main(){
    // Using char[] to define a string object.
    const char vvv[] = "asd";
    printf("aa: %s\n", vvv);
    printf("vvv length: %d\n", sizeof(vvv));
    printf("N: %d\n", N);
    # undef N       // un define N 结束N的作用域
    // printf("N: %d\n", N);


    int years[6] = {2012, 2011, 2013, 2014, 2015, 2019};
    int mouths[12] = {1, 2, 3, 4, 5, 6, 7}; //  剩下的自动0
    int days[] = {1, 15};   //right.   size 2.
    // int arrays[] = {};      // error. no size when init.
    printf("years length: %d\n", LEN(years));
    printf("mouths length: %d\n", LEN(mouths));
    printf("days length: %d\n", LEN(days));


    //dynamic entry
    double score[DEFAULT_LENGTH];
    for(int i = 0; i < DEFAULT_LENGTH; i++)
    {
        printf("Please input a score of student: %d\n", i + 1);
        // scanf("%lf", &score[i]);
        scanf("%lf", &score[i]);
    }

    double score2[2];
    printf("Array score element is: \n");
    for(int i = 0; i < DEFAULT_LENGTH; i++)
    {
        printf("Score index: %d, value is: %lf\n", i, score[i]);
    }
    
    score2[0] = 1111.11;
    score2[1] = 2222.22;
    for(int i = 0; i < 2; i++)
    {
        printf("Score2 index: %d, value is: %lf\n", i, score2[i]);
    }
}