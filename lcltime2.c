/*显示当前日期和时间二：利用asctime函数*/
#include <time.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    time_t current = time(NULL);
    printf("当前日期和时间：%s", asctime(localtime(&current)));
    // 使用asctime函数需要先把日历时间转化为分解时间
    return 0;
}
