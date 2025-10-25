// 2024년 1회 기출문제 4번
// 문자열을 뒤집고 홀수 인덱스의 문자만 출력하는 프로그램

#include <stdio.h>
#include <string.h>

void fn(char* str){
    char t;
    int len = strlen(str);
    char* p1 = str;
    char* p2 = str + len - 1;
    while(p1<p2){
        t = *p1;
        *p1 = *p2;
        *p2 = t;
        p1++;
        p2--;
    }
}

int main(int argc, char*argv[]){
    char str[100] = "ABCDEFGH";
    int len, i;

    fn(str);
    len = strlen(str);
    
    for(i=1; i<len; i+=2){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}