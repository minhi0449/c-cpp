// 2023년 2회 기출문제 9번
// 버블 정렬(Bubble Sort) 알고리즘을 이용한 배열 오름차순 정렬

#include <stdio.h>
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0, j, tmp;
    do{
        j = i + 1;
        do{
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            j++;
        } while (j < n);
        i++;
    } while (i < n-1);
    for(i=0; i<=4; i++)
        printf("%d ", arr[i]);
    return 0;
}