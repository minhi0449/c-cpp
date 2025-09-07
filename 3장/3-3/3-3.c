// 증감 연산자
#include <stdio.h>

int main(void)
{
    int a;
    int b;

    a = 5;
    printf("++a 의 처리 결과 : %d\n", ++a);

    a = 5;
    printf("a++ 의 처리 결과 : %d\n", a++);
    printf("a를 다시 출력 : %d \n\n", a);

    b = 10;
    printf("b-- 의 처리 결과 : %d\n", b--);

    b = 10;
    printf("--b 의 처리 결과 : %d\n", --b);
    printf("b를 다시 출력 : %d \n\n", b);

    return 0;
}