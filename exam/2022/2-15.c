#include <stdio.h>

int len(char* p);
int main(void) {
    char *p1 = "2022";
    char *p2 = "202207";
    printf("%d", len(p1) + len(p2));
    return 0;
}
int len(char* p) {
    int r = 0;
    while (*p != '\0') {
        p++;
        r++;
    }
    return r;
}
