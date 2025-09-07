// 대입 연산자
#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;

    a += b;
    printf("a += b의 결과는 %d 입니다. \n", a);
    a -= b;
    printf("a -= b의 결과는 %d 입니다. \n", a);
    a *= b;
    printf("a *= b의 결과는 %d 입니다. \n", a);
    a /= b;
    printf("a /= b의 결과는 %d 입니다. \n", a);
    a %= b;
    printf("a %= b의 결과는 %d 입니다. \n", a);
    return 0;
}