// 2023년 3회 기출문제 10번
// C언어의 포인터와 문자열의 관계

#include <stdio.h>
int main(){
    char* p = "KOREA";
    printf("%s\n", p);
    printf("%s\n", p+1);
    printf("%c\n", *p);
    printf("%c\n", *(p+3));
    printf("%c\n", *p+4);
    return 0;
}