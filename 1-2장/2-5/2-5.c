#include <stdio.h>
// 정수형 사용하기
int main(void){
    short a = 32766;
    short b = 10;
    short c = a + b;
    int d = a + b;

    printf("정수형 a의 값 %d와 b의 값 %d의 합은 %d이다. \n", a, b, c);
    printf("정수형 a의 값 %d와 b의 값 %d의 합은 %d이다. \n", a, b, d);
    return 0;
}