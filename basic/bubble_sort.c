/**
 * Bubble sort 冒泡排序
 */

# include "stdio.h"
# define LEN(x) sizeof(x) / sizeof(x[0])

void main(){
    int ar[] = {16, 25, 9, 90, 23, 1, 33, 77, 99, 103, 22, 12, 7, 2, 98, 97, 66, 67, 64, 27, 26, 25, 24};
    int len = LEN(ar);
    int counter = 0;
    for(int i=len - 1;i>0;i--){
        for(int j=0;j<i;j++){
            if (ar[j] < ar[i]) {
                counter++;
                int tmp;
                tmp = ar[j];
                ar[j] = ar[i];
                ar[i] = tmp;
            }
        }
    }

    for(int i=0;i<len;i++){
        printf("ar index: %d, value is: %d\n", i, ar[i]);
    }

    printf("array length: %d, counter: %d", len, counter);
}