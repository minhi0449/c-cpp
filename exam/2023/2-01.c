// 2023년 2회 기출문제 1번
// 배열과 모듈로 연산을 활용한 순환 출력

#include <stdio.h>
int main(){
    int n[5] = {5, 4, 3, 2, 1};
    int i;
    for(i=0; i<5; i++){
        printf("%d", n[(i+1)%5]);
    }
    return 0;
}

// 출력 결과 : 43215