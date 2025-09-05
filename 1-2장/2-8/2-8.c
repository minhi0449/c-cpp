// signed 와 unsigned 의 차이
#include <stdio.h>

int main(void)
{
    unsigned short a = 32766;
    unsigned short b = 10;
    unsigned short c = a + b;
    int d = a + b;

    printf("정수형 a의 값 %d와 b의 값 %d의 합은 %d이다. \n", a, b, c);
    printf("정수형 a의 값 %d와 b의 값 %d의 합은 %d이다. \n", a, b, d);
    return 0;
}