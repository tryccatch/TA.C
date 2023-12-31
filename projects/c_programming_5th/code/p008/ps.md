# [P008](../readme.md#p008)

### [例8.1](ps8_1.c)

通过指针变量访问整型变量

### [例8.2](ps8_2.c)

输入a和b两个整数,按先大后小的顺序输出a和b

```
5,7
```

### [例8.3](ps8_3.c)

题目要求同例8.2,即对输入的两个整数按大小顺序输出。现用函数处理,而且用指针类型的数据作函数参数

```
5,9
```

### [例8.4](ps8_4.c)

对输入的两个整数按大小顺序输出

```
5,9
```

### [例8.5](ps8_5.c)

输人3个整数a,b,c,要求按由大到小的顺序将它们输出。用函数实现

```
20,-54,67
```

### [例8.6](ps8_6_1.c)

有一个整型数组,有10个元素,要求输出数组中的全部元素

[8.6.1](ps8_6_1.c)

[8.6.2](ps8_6_2.c)

[8.6.3](ps8_6_3.c)

```
0 1 2 3 4 5 6 7 8 9
```

### [例8.7](ps8_7_1.c)

通过指针变量输出整型数组a的10个元素

[8.7.1](ps8_7_1.c)

[8.7.2](ps8_7_2.c)

```
0 1 2 3 4 5 6 7 8 9
```

### [例8.8](ps8_8_1.c)

将数组a中n个整数按相反顺序存放

```
  3  7  9 11  0  6  7  5  4  2

  2  4  5  7  6  0 11  9  7  3
```

[8.8.1](ps8_8_1.c)

[8.8.2](ps8_8_2.c)

### [例8.9](ps8_9.c)

改写例8.8，用指针变量作实参

[8.9.1](ps8_9_1.c)

[8.9.2](ps8_9_2.c)

```
  3  7  9 11  0  6  7  5  4  2
```

### [例8.10](ps8_10_1.c)

用指针方法对10个整数按由大到小顺序排序

[8.10.1](ps8_10_1.c)

[8.10.2](ps8_10_2.c)

```
12 34 5 689 -43 56 -21 0 24 65
```

### [例8.11](ps8_11.c)

输出二维数组的有关数据（地址和元素的值）

### [例8.12](ps8_12.c)

有一个3×4的二维数组，要求用指向元素的指针变量输出二维数组各元素的值

### [例8.13](ps8_13.c)

输出二维数组任一行任一列元素的值

```
1,2
```

分析小程序

[8.13.1](ps8_13_1.c)

### [例8.14](ps8_14.c)

有一个班，3个学生，各学4门课，计算总平均分数以及第n个学生的成绩

### [例8.15](ps8_15.c)

在例8.14的基础上，查找有一门以上课程不及格的学生，输出他们的全部课程的成绩

### [例8.16](ps8_16.c)

定义一个字符数组，在其中存放字符串`"I love China!"`,输出该字符串和第8个字符

### [例8.17](ps8_17.c)

通过字符指针变量输出一个字符串

### [例8.18](ps8_18.c)

将字符串a复制为字符串b,然后输出字符串b。

### [例8.19](ps8_19.c)

用指针变量来处理例8.18问题

### [例8.20](ps8_20_1.c)

用函数调用实现字符串的复制

[8.20.1](ps8_20_1.c)

[8.20.2](ps8_20_2.c)

[8.20.3](ps8_20_3.c)

### [例8.21](ps8_21.c)

改变指针变量的值

### [例8.22](ps8_22_1.c)

用函数求整数a和b中的大者

```
45,87
```

[8.22.1](ps8_22_1.c)

[8.22.2](ps8_22_2.c)

### [例8.23](ps8_23.c)

输人两个整数，然后让用户选择1或2，选1时调用max函数，输出二者中的大数，选2时调用min函数，输出二者中的小数。

```
34,89
1
```

```
34,89
2
```

### [例8.24](ps8_24.c)

有两个整数a和b,由用户输人1,2或3。如输入1，程序就给出a和b中的大者，输入2，就给出a和b中的小者，输入3，则求a与b之和。

### [例8.25](ps8_25.c)

有a个学生，每个学生有b门课程的成绩。要求在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数来实现。

### [例8.26](ps8_26.c)

对例8.25中的学生，找出其中有不及格的课程的学生及其学生号。

### [例8.27](ps8_27_1.c)

将若干字符串按字母顺序（由小到大）输出

[8.27.1](ps8_27_1.c)

[8.27.2](ps8_27_2.c)

### [例8.28](ps8_28.c)

使用指向指针数据的指针变量

### [例8.29](ps8_29.c)

有一个指针数组，其元素分别指向一个整型数组的元素，用指向指针数据的指针变量，输出整型数组各元素的值。这是一个简单例子，目的是为了说明它的用法。

### [例8.30](ps8_30.c)

建立动态数组，输入5个学生的成绩，另外用一个函放数检查其中有无低于60分的，输出不合格的成绩。

```
67 98 59 78 57
```
