// 2020년 4회 기출문제 18번
// 포인터를 이용한 문자열 접근 방법 (포인터 연산과 역참조)

#include <stdio.h>
int main(){
    char *p = "KOREA";
    printf("%s\n", p);
    printf("%s\n", p+3);
    printf("%c\n", *p);
    printf("%c\n", *(p+3));
    printf("%c\n", *p+2);
    return 0;
}