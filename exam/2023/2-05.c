// 2023년 2회 기출문제 5번
// 전역 변수를 사용한 포인터 함수의 함정

#include <stdio.h>
char n[30];
char *cpp(){
    gets(n);
    return n;
}
int main(){
    char *p1 = cpp();
    char *p2 = cpp();
    char *p3 = cpp();
    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%s\n", p3);
    return 0;
}