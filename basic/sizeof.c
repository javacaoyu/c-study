# include "stdio.h"

int main(){
    printf("int size: %d", sizeof(int));
    printf("\n");


    printf("double size: %d", sizeof(123.33));
    printf("\n");
    printf("fload size: %d", sizeof(123.3f));
    return 0;
}