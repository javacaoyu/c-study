# include "stdio.h"
# include "ctype.h"

/*
isupper, islower, isalpha, isdigit, toupper, tolower 均定义在ctype.h中
*/

void main(){
    //常用内置函数

    printf("a:is upper? %d\n", isupper('a'));
    printf("a:is lower? %d\n", islower('a'));
    printf("97:is alpha? %d\n", isalpha(97));
    printf("33:is digit? %d\n", isdigit(33));   // 判断传入的【字符】 是否是数字
    // is alpha, isdigit  isupper islower 都是判断传入的 【字符】是否是啥啥啥。
    // 如果你传入的是数字， 那么就当做ASCII码，去判断这个数字对应的ASCII码
    // 所以  isdigit传入33 是false， 因为ascii码33代表的不是数字
    // is alpha 传入97 是true 是因为，97对应的是字母（a）
    printf("char 33: is digit?: %d\n", isdigit('5'));
    // 只能传入'5', 不能传入'55'  char 不能接受两个字符， 但是如果传入"55" 会报错。。。
    printf("c to upper: %c\n", toupper('c'));
    printf("D to lower: %c\n", tolower('D'));

}