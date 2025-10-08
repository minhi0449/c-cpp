// 2020년 1회 기출문제 12번
// 버블 정렬(Bubble Sort) 알고리즘으로 배열을 오름차순 정렬하기

#include <stdio.h>
int main(){
    int i, j;
    int temp;
    int a[5] = {75, 95, 85, 100, 50};
    for(i=0; i<4; i++){
        for(j=0; j<4-i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}