// 2023년 3회 기출문제 4번

#include <stdio.h>
int perfect_number(int n){
    int i, sum = 0;
    for(i = 1; i <= n / 2; i++){
        if(n % i == 0)
            sum += i;
    }
    if(n == sum)
        return 1;

    return 0;
}
int main(){
    int i, sum = 0;
    for(i = 2; i <= 100; i++){
        if(perfect_number(i))
            sum += i;
    }
    printf("%d", sum);
    return 0;
}