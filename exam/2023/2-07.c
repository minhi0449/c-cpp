// 2023년 2회 7번
// 거스름돈 계산 프로그램 (그리디 알고리즘)

#include <stdio.h>
int main(){
    int m = 4620;
    int a, b, c, d;
    a = m / 1000;
    b = (m % 1000) / 500;
    c = (m % 500) / 100;
    d = (m % 100) / 10;
    printf("1000원 : %d개\n", a);
    printf("500원  : %d개\n", b);
    printf("100원  : %d개\n", c);
    printf("10원   : %d개\n", d);
}