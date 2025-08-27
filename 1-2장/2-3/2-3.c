#include <stdio.h>

int main(void)
{
    printf("Be Happy\n");
    printf("12345678901234567890\n");

    // "My" 를 출력하고 탭 위치로 이동(\t) 후에 "Friend" 출력하고 줄을 바꿈(\n)
    printf("My\tFriend\n");

    // "Goot" 를 출력하고 한 칸 왼쪽으로 이동 (\b) 해
    // t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄을 바꿈(\n)
    printf("Goot\bd\tchance\n");

    // 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a) 를 내고 줄을 바꿈(\n)
    printf("Cow\rW\a\n");
    
    return 0;

    /*
        [실행결과]
        Be Happy
        12345678901234567890
        My    Friend
        Good  chance
        Wow
    */
}