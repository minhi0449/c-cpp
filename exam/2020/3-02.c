// 2020년 3회 기출문제 2번
// 곱셈 연산 시 초기값이 0이면 결과는 항상 0이다 - 변수 초기화의 중요성

#include <stdio.h>
int main(){
    int i = 0, c = 0;
    while(i < 10){
        i++;
        c *= i;
    }
    printf("%d", c);
    return 0;
}