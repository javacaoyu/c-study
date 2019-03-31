# include<stdio.h>

int main(){
    int num;
    long n2;
    float n3;
    double n4;
    char c1;
    printf("Please input a num: \n");
    scanf("%d", &num);
    scanf("%d", &n2);
    scanf("%f", &n3);
    scanf("%lf", &n4);

    
    scanf("%c", &c1);
    printf("Num variable is: %d\n", num);
    printf("n2 variable is: %d\n", n2);
    printf("n3 variable is: %f\n", n3);
    printf("n4 variable is: %lf\n", n4);
    printf("c1 variable is: %c\n", c1);

    scanf("%c", &c1);
    printf("asdasd%c", c1);
}