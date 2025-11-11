#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int phanTuNhieuNhat(int a[], int n) {
    int maxVal = a[0];
    int maxCount = 0;
    
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) dem++;
        }
        if (dem > maxCount) {
            maxCount = dem;
            maxVal = a[i];
        }
    }
    return maxVal;
}
int soLanXuatHienNhieuNhat(int a[], int n) {
    int maxCount = 0;
    
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) dem++;
        }
        if (dem > maxCount) {
            maxCount = dem;
        }
    }
    return maxCount;
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
    
    int giaTri = phanTuNhieuNhat(a, n);
    int soLan = soLanXuatHienNhieuNhat(a, n);
    
    printf("Phan tu xuat hien nhieu nhat: %d\n", giaTri);
    printf("So lan xuat hien: %d\n", soLan);

}

