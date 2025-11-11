#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int timPhanTuItNhat(int a[], int n) {
    int minCount = n + 1;
    int result = a[0];
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                count++;
            }
        }
        
        if (count < minCount) {
            minCount = count;
            result = a[i];
        }
    }
    
    return result;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int a[n];
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    if (n == 0) {
        printf("Mang rong!\n");
        return 0;
    }
    
    int kq = timPhanTuItNhat(a, n);
    printf("phan it thu nhat la: %d", kq);
 
}


