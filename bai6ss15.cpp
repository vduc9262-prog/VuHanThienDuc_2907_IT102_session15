#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bubbleSort(int a[], int n) {
    for (int i=0; i<n - 1; i++) {
        for (int j =0; j <n - 1 - i;j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
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
    
    bubbleSort(a, n);
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}

