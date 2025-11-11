#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tongMang(int a[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Tong mang = %d\n", tongMang(a, n));

}

