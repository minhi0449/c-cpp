// 2021년 1회 기출문제 15번
// 구조체 배열과 포인터를 사용한 데이터 접근

#include <stdio.h>
struct Student {
    char name[10];
    int age;
};
int main(){
    struct Student s[] = {"Kim", 28, "Lee", 38, "Seo", 50, "Park", 35};
    struct Student *p;
    p = s;
    printf("%s\n", p->name);
    printf("%d\n", p->age);
    return 0;
}