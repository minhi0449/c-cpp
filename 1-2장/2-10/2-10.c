#include <stdio.h>

int main(void)
{
    int input1, input2;
    int total;

    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d%d", &input1, &input2);
    total = input1 + input2;

    printf("두 수의 합은 %d 이다. \n", total);
    return 0;
}