GNU nano 7.2                                                                                          mul.c
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Product = %d", a * b);
    return 0;
}
