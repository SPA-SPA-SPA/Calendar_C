/*心算游戏：计算4个0~99的整数相加所需的时间*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;                     // 要加的数值
    int x;                              // 读取到值
    time_t start, end;                  // 开始时间和结束时间

    srand(time(NULL));                  // 设定随机数的种子

    a = rand() % 100;                   // 生成0~99的随机数
    b = rand() % 100;
    c = rand() % 100;
    d = rand() % 100;
    
    printf("%d + %d + %d + %d等于多少：", a, b, c, d);

    start = time(NULL);                         // 开始
    
    while(1){
        scanf("%d", &x);
        if(x == a + b + c + d)
            break;
        printf("\a回答错误！！\n请重新输入：");
    }
    end = time(NULL);                           // 结束

    printf("用时%.0f秒。\n", difftime(end, start));
    return 0;
}
