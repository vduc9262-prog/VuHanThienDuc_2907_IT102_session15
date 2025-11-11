#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int binarySearch(int a[], int n, int x) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (a[mid] == x) {
            return mid;
        }
        
        if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Nhap %d so nguyen (da sap xep tang dan):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    
    int ketqua = binarySearch(a, n, x);
    
    if (ketqua != -1) {
        printf("Tim thay %d tai chi so: %d\n", x, ketqua);
    } else {
        printf("Khong tim thay %d trong mang\n", x);
    }
    
    return 0;
}

