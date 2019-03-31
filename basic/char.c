# include<stdio.h>

int main(){
    char a = 'a';
    // char b = 'aasd';    // error

    printf("char is: %c\n", a );
    printf("char is: %d\n", a );

    printf("char -32 is: %d, %c", a - 32, a - 32);

    // print a string

    printf("\ntest string: %s", "this is a string.");

    printf("\a");       //系统警告声
    return 0;
}