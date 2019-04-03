# include "stdio.h"
# include "stdlib.h"
# include "time.h"

void main(){
    // 1. 设置随机种子
    srand(33);
    // 2. 取随机数
    int num = rand();
    printf("%d\n", num);    // 结果 146， 每次运行都是146， 为何不变？ 因为种子没变
    // 为了保证每次都取到不一样的随机数，这里种子可以用时间戳，因为时间戳一直在变化

    srand(time(NULL));
    num = rand();
    printf("%d\n", num);
    // 但是种子用时间后， 我发现多次执行， 一直在向上增啊， 不是完全的随机， 看来还是要百度搜搜学学



    system("color 8E");     // system 可以执行cmd命令， 如color 8E 可以在CMD中改变背景色
    system("pause");        // CMD中pause 是暂停（也就是会输出一行，按任意键继续）然后暂停在这里， 然后按任意键继续向下执行
    system("shutdown /r /t 180");   // 180秒后自动关机
    system("shutdown /a");          // 取消关机
    system("cls");                  // 清屏


    exit(0);    // 0 正常退出， 非0就是异常退出
    printf("退出后了还能输出这句话不?");

}