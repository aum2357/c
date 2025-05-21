#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int compute(int a, int b, int (*func)(int, int)) {
    return func(a, b);
}

int main() {
    int res = compute(3, 4, add);
    printf("%d\n", res);
    return 0;
}