#include <stdio.h>

int main(void)
{
    int input1, input2, input3;
    int total;

    printf("3개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &input1, &input2, &input3);
    total = input1 * input2 * input3;

    printf("3개의 수를 곱한 결과 : %d", total);
    return 0;
}