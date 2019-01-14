/*显示当前日期和时间三：使用ctime函数*/

#include <time.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    time_t current = time(NULL);                    // 获取当前时间
    printf("当前日期和时间：%s", ctime(&current));
    return 0;
}
