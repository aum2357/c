#include <stdio.h>


int sum(const int a,const int b) {
    return a+b;
}
int multiply(const int a, const int b) {
    return a*b;
}
int subtract(const int a, const int b) {
    return a-b;
}
int mod(const int a, const int b) {
    return a%b;
}
int main() {

    int (*compute[4])(int,int) = {sum,multiply,subtract,mod};
    int choice;
    printf("Choose one of the following:\n");
    printf("1. Sum\n");
    printf("2. Multiply\n");
    printf("3. Subtract\n");
    printf("4. Divide\n");
    scanf("%d",&choice);
    printf("%d\n",compute[choice -1 ](2,3));


    return 0;
}
