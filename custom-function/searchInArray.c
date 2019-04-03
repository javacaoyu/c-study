# include "stdio.h"

# define LEN(x) sizeof(x) / sizeof(x[0])
int search();
// int search2(int num);
int search2(int);   // 定义这里， 给不给参数名都行一般不给

void main(){
    // int searchedIndex = search();
    // if (searchedIndex == -1) {
    //     printf("没有找到。。。");
    //     return;
    // }
    // printf("找到的下标是： %d\n", searchedIndex);
    
    int searchNum;
    printf("Please input a number you wanna to search it's index.\n");
    scanf("%d", &searchNum);
    int searchedIndex = search2(searchNum);
    printf("2 找到的下标是： %d\n", searchedIndex);
}


int search(){
    // search a number, that number define by input in cli.
    int nums[] = {1, 2, 5, 3231, 51,3143,214,124124,152345432,123,12};
    int searchNum;
    int searchedIndex = -1;     // 找不到返回-1
    printf("Please input a number you wanna to search...\n");
    scanf("%d", &searchNum);
    for(int i = 0; i < LEN(nums); i++)
    {
        if(searchNum == *(nums + i)){
            searchedIndex = i;
        }
    }
    return searchedIndex;
}


int search2(int searchNum){
    // search a number, that number define by input in cli.
    int nums[] = {1, 2, 5, 3231, 51,3143,214,124124,152345432,123,12};
    int searchedIndex = -1;     // 找不到返回-1
    for(int i = 0; i < LEN(nums); i++)
    {
        if(searchNum == *(nums + i)){
            searchedIndex = i;
        }
    }
    return searchedIndex;
}