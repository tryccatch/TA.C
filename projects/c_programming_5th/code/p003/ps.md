# [P003](../readme.md#p003)

## Examples

### [例3.1](ps3_1.c)

华氏法表示的温度(如 $64\degree F$ )转换为摄氏法表示的温度 (如 $17.8\degree C$)
转换公式:
$$c=\dfrac{5}{9}(f-32)$$

### [例3.2](ps3_2.c)

计算存款利息。有1000元,想存一年。有3种方法可选：

1. 活期,年利率位 $r_1$
2. 一年期定期,年利率为 $r_2$
3. 存两次半年定期,年利率为 $r_3$

请分别计算出一年后按3种方法所得到的本息和

### [例3.3](ps3_3.c)

给定一个大写字母,要求用小写字母输出

### [例3.4](ps3_4.c)

给出三角形的边长,求三角形面积 $$area = \sqrt{s(s - a)(s - b)(s - c)}$$ 其中 $s =\dfrac{a + b + c}{2}$

### [例3.5](ps3_5.c)

求 $ax^2+bx+c=0$ 方程的根 $a,b,c$ 由键盘输入 设 $b^2-4ac>0$

### [例3.6](ps3_6.c)

用`%f`输出实数,只能得到6位小数

### [例3.7](ps3_7.c)

`float`型数据的有效位数

### [例3.8](ps3_8_1.c)

先后输出`BOY`三个字符

[3.8.1](ps3_8_1.c)

[3.8.2](ps3_8_2.c)

### [例3.9](ps3_9_1.c)

从键盘输入`BOY` 3个字符,然后输出到屏幕

[3.9.1](ps3_9_1.c)

[3.9.2](ps3_9_2.c)

```
BOY
```

```
B
O
Y
```

### [例3.10](ps3_10_1.c)

从键盘输入一个大写字母,在显示屏上显示对应的小写字母

[3.10.1](ps3_10_1.c)

```
B
```

[3.10.2](ps3_10_2.c)

```
M
```

## Exercises

### [习题1](px3_1.c)

假如我国国民生产总值的年增长率为7%,计算10年后我国国民生产总值与现在相比增长多少百分比。计算公式为
$$p=(1+r)^n$$
r为年增长率,n为年数,p为与现在相比的倍数。

### [习题2](px3_2.c)

2.存款利息的计算。有1000元,想存5年,可按以下5种办法存：

1. 一次存5年期
2. 先存2年期,到期后将本息再存3年期
3. 先存3年期,到期后将本息再存2年期
4. 存1年期,到期后将本息再存1年期,连续存5次
5. 存活期存款。活期利息每一季度结算一次

2017年的银行存款利息如下：

- 1年期定期存款利息为1.5%
- 2年期定期存款利息为2.1%
- 3年期定期存款利息为2.75%
- 5年期定期存款利息为3%
- 活期存款利息为0.35%(活期存款每一季度结算一次利息)

如果r为年利率,n为存款年数,则计算本息和的公式如下：

- 1年期本息和： $P=1000*(1+r)$
- n年期本息和： $P=1000*(1+n×r)$
- 存n次1年期的本息和： $P=1000(1+r)^n$
- 活期存款本息和： $P=1000*(1+\dfrac{r}{4})^\text{4n}$

说明： $1000*(1+\dfrac{r}{4})$ 是一个季度的本息和

### [习题3](px3_3.c)

购房从银行贷了一笔款d,准备每月还款额为p,月利率为,计算多少月能还清。设d为300000元,p为6000元,r为1%。对求得的月份取小数点后一位,对第2位按四舍五入处理。
提示：计算还清月数m的公式如下：
$$m=\dfrac{\log p-\log(p-d×r)}{\log(1+r)}$$
可以将公式改写为
$$m=\dfrac{\log(\dfrac{p}{p-d×r}) }{\log(1+r)}$$
C的库函数中有求对数的函数 $\log10$ ,是求以10为底的对数, $\log(p)$ 表示 $\log p$。

### [习题4](px3_4.c)

分析下面的程序：

```c {.line-numbers}
#include <stdio.h>
int main()
{
    char c1, c2;
    c1 = 97;
    c2 = 98;
    printf("c1=%c,c2=%c\n", c1, c2);
    printf("c1=%d,c2=%d\n", c1, c2);
    return 0;
}
```

1. 运行时会输出什么信息？为什么？
2. 如果将程序第5,6行改为

```
c1 = 197;
c2 = 198;
```

运行时会输出什么信息？为什么？

3. 如果将程序第4行改为

```
int c1, c2;
```

运行时会输出什么信息？为什么？

### [习题5](px3_5.c)

用下面的scanf函数输入数据，使`a=3,b=7,x=8.5,y=71.82,c1='A',c2='a'`。在键盘上应如何输人？

```c {.line-numbers}
#include <stdio.h>
int main()
{
    int a, b;
    float x, y;
    char c1, c2;
    scanf("a=%db=%d", &a, &b);
    scanf("%f%c", &x, &y);
    scanf("%c%c", &c1, &c2);
    return 0;
}
```

### [习题6](px3_6.c)

请编程序将`"China"`译成密码，密码规律是：用原来的字母后面第4个字母代替原来的字母。例如，字母`"A"`后面第4个字母是`"E"`,用`"E"`代替`"A"`。因此，`"China"`应译为`"Glmre"`。请编一程序，用赋初值的方法使`c1,c2,c3,c4,c5`这5个变量的值分别为`'C','h','i','n','a'`,经过运算，使`c1,c2,c3,c4,c5`分别变为`'G','l','m','r','e'`。分别用`putchar`函数和`printf`函数输出这5个字符。

### [习题7](px3_7.c)

设圆半径r=1.5,圆柱高h=3,求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。用scanf输入数据，输出计算结果，输出时要求有文字说明，取小数点后2位数字。请编程序。

### [习题8](px3_8.c)

编程序，用getchar函数读入两个字符给c1和c2,然后分别用putchar函数和printf函数输出这两个字符。思考以下问题：

1. 变量c1和c2应定义为字符型、整型还是二者皆可？
2. 要求输出c1和c2值的ASCII码，应如何处理？用putchar函数还是printf函数？
3. 整型变量与字符变量是否在任何情况下都可以互相代替？如：

```c
char c1, c2;
```

与

```c
int c1, c2;
```

是否无条件地等价？