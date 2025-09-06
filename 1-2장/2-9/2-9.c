// 사용자로부터의 데이터 입력
#include <stdio.h>
int main(void)
{
    int input1, input2;
    int total;

    printf("첫 번째 정수를 입력하세요 : ");
    scanf("%d", &input1);
    printf("두 번째 정수를 입력하세요 : ");
    scanf("%d", &input2);
    total = input1 + input2;

    printf("두 수의 합은 %d 이다. \n" , total);
    return 0;
}