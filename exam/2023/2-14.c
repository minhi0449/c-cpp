// 2023년 2회 기출문제 14번
// 1부터 2023까지의 숫자 중에서 4의 배수 개수 세기

#include <stdio.h>
int main(){
    int c = 0;
    int i;

    for(i=1; i<=2023; i++){
        if(i%4 == 0) c++;
    }
    printf("%d", c);
    return 0;
}