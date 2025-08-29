#include <stdio.h>

// fn 함수 정의
int fn(int a){
    if(a <= 1) return 1;  // 1 이하인 경우 무조건 1 반환
    return a * fn(a - 1); // 재귀호출
}
int main() {
    int a;
    scanf("%d", &a);      // 사용자 입력 받기
    printf("%d", fn(a));  // fn 함수 결과 출력
    return 0;
}