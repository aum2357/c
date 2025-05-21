#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int (*get_operator(char op))(int,int){
    if(op == '+')
        return add;
    return sub;
}
int main() {
    int (*func)(int,int) = get_operator('+');
    printf("%d\n", func(10,20));
}