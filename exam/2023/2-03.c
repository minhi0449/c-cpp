// 2023년 2회 기출문제 3번
// 스택(Stack) 자료구조 구현 프로그램

#include <stdio.h>
#define MAX_SIZE 10

int isWhat[MAX_SIZE];
int point = -1;

int isEmpty(){
    if(point == -1) return 1;
    return 0;
}

int isFull(){
    if(point == 10) return 1;
    return 0;
}

void into(int num){
    if(point >= 10) printf("Full");
    isWhat[++point] = num;
}

int take(){
    if(isEmpty() == 1) printf("Empty");
    return isWhat[point--];
}

int main(){
    into(5);
    into(2);
    while(!isEmpty()){
        printf("%d", take());
        into(4);
        into(1);
        printf("%d", take());
        into(3);
        printf("%d", take());
        printf("%d", take());
        into(6);
        printf("%d", take());
        printf("%d", take());
    }
    return 0;
}