#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int hieu(int a, int b) {
    return (a - b);
}

long long tich(int a, int b) {
    return (long long)a * b;
}

int main() {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Hieu: %d\n", hieu(a, b));
    printf("Tich: %lld\n", tich(a, b));
    return 0;
}

