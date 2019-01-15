# 用C语言处理日期

## 1. 今天的日期

### 1. lcltime1.c

获取并显示当前（运行程序时）日期和时间的程序。***C语言标准库***提供了两种表示日期和时间的类型，即`time_t`型的日历时间和`struct tm`型的分解时间。使用localtime函数能把日历时间转化为本地时间表示的分解时间。

### 2. lcltime2.c
与1不一样的是，2利用了asctime函数。

### 3. lcltime3.c
与1不一样的是，3利用了ctime函数。

### 4. utctime1.c
使用了gmtime函数，把日历时间转化为协调世界时表示的分解时间。

## 2. 一段时间
### 1. mental.c
一个心算游戏。使用difftime函数求两个日历时间的差。而不是使用clock_t类型和clock函数求两个时钟数的差。

### 2. ssleep_function.c
在C_CodeKit项目中。

## 3. 求星期
### 1. dayofweek1.c
利用mktime函数可以把分解时间转化为日历时间。只需设定分解时间结构体的年月日，并调用mktime函数，函数会自动求出结构体的星期（tm_wday）和一年中经过的天数（tm_yday）的值。所以，可以利用这个方式求出指定日期的星期。但仅限于1970年1月1日后的日期。

### 2. dayofweek2.c
根据蔡勒公式求星期的程序。仅限于1582年10月15日后的日期。

## 4. 日历
### 1. calendar1.c
读取公历的年和月，并显示该月的日历。

### 2. calendar2.c
读取要显示的年月的范围，横向排列并显示3个月的日历。
