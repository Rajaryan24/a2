#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); // Takes input from user
    sum = a + b;
    printf("Sum = %d", sum);
    return 0;
}
