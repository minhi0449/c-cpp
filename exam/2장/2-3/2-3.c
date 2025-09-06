// 사용자로부터 알파벳 문자 하나를 입력받는다.
// 그리고 이에 해당하는 숫자를 출력하라.
// 예를 들어, 'A'를 입력하면 출력 결과는 65가 되어야 한다.
// (참고, 문자 입력 서식은 %c를 사용하면 된다.)
#include <stdio.h>

int main(void)
{
    char ch;
    int num;

    printf("알파벳을 입력하세요 : ");
    scanf("%c", &ch);
    num = ch;

    printf("%c 의 숫자는 %d 입니다.\n", ch, num);
    return 0;
}