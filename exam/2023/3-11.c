// 2023년 3회 기출문제 11번
// 재귀 함수의 동작 원리와 실행 결과 추적

#include <stdio.h>
int soojebi(int n){
    if(n<=1){
        return n;
    }
    else{
        return soojebi(n-1) + soojebi(n-3);
    }
}
int main(){
    printf("%d", soojebi(7));
    return 0;
}