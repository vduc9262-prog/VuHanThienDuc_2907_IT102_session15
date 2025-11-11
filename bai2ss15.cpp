#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tongChuSo(int n) {
    int tong = 0;
    n = abs(n);
    if (n == 0) return 0;
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    printf("Tong cac chu so: %d\n", tongChuSo(n));
    return 0;
}


