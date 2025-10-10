// 2020년 3회 기출문제 13번
// 함수 호출 체인과 반환값의 흐름

#include <stdio.h>
int r1(){
    return 4;
}
int r10(){
    return (30+r1());
}
int r100(){
    return (200+r10());
}
int main(){
    printf("%d\n", r100());
    return 0;
}