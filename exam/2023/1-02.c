// 2023년 1회 기출문제 2번
// 배열과 포인터를 이용한 문자열 처리 및 출력 방식 비교

#include <stdio.h>

int main() {
    char a[] = "Art";
    char* p = NULL;
    int i = 0;

    p = a;
    printf("%s\n", a);
    printf("%c\n", *p);
    printf("%c\n", *a);
    printf("%s\n", p);

    for(i = 0; a[i] != '\0'; i++) {
        printf("%c", a[i]);
    }

    return 0;
}

/*
    [출력 결과]
    Art
    A
    A
    Art
    Art
*/