/**
 * two dimensional array 二维数组
 */

# include "stdio.h"
# define ROW 5
# define COL 7

void main(){
    double td_array[ROW][COL];
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("Input num: %d, index: %d value is?\n", i, j);
            scanf("%lf", &td_array[i][j]);
        }
    }

    for(int i = 0; i < ROW; i++)
    {
        printf("Row: %d: ", i + 1);
        for(int j=0; j < COL; j++){
            printf("%lf\t", td_array[i][j]);
        }
        printf("\n");
    }
}