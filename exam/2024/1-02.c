// 2024년 1회 기출문제 2번
// 삼항 연산자 + if문 조건 판단 + 비트 시프트

#include <stdio.h>
int main(){
    int v1=0, v2=35, v3=29;
    if(v1>v2 ? v2 : v1){
        v2 = v2 << 2;
    }
    else {
        v3 = v3 << 2;
    }
    printf("%d", v2+v3);
    return 0;
}