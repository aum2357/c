#include <stdio.h>

int add(const int a, const int b) {
    return a + b;
}

int (*compute_sum)(int a, int b);

int main(void) {

    compute_sum = add;
    printf("%d\n", compute_sum(3, 5));
    return 0;
}