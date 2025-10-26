// 2024년 1회 기출문제 12번
// 구조체와 포인터를 활용한 데이터 관리

#include <stdio.h>

// 통장 구조체 정의
typedef struct {
    int acc;      // 계좌 번호 (Account Number)
    double bal;   // 잔액 (Balance)
} Acc;

// 이자 계산용 함수 (복리 계산)
// fn(base, year) → base를 year번 곱함
double fn(double b, int y) {
    int i;
    double r = 1.0;  // 결과 초기값 (1.0)
    for(i = 0; i < y; i++) {
        r = r * b;   // 예: (1.1)^3 = 1.331
    }
    return r;
}

// 계좌 초기화 함수
void init(Acc *a, int x, double y) {
    a->acc = x;   // 계좌번호 설정
    a->bal = y;   // 초기 잔액 설정
}

// 입출금 함수
void A(Acc *a, double en) {
    // 출금 조건: en이 0보다 크고, 잔액보다 작거나 같을 때
    if(en > 0 && en <= a->bal) {
        a->bal = a->bal - en;   // 출금
    }
    else {
        a->bal = a->bal + en;   // 입금
    }
}

// 3년치 이자 계산 (연 10%)
void B(Acc *a) {
    a->bal = a->bal * fn((1 + 0.1), 3);
}

// 프로그램 시작점 (main 함수)
int main() {
    Acc a;   // Acc 구조체 변수 선언 (a는 통장 1개라고 생각)

    // a 계좌 초기화: 계좌번호 9981, 잔액 2200.0
    init(&a, 9981, 2200.0);

    // 100원 출금
    A(&a, 100.0);

    // 3년 뒤 잔액 계산 (이자 적용)
    B(&a);

    // 결과 출력
    printf("%d and %.2f", a.acc, a.bal);

    return 0;
}