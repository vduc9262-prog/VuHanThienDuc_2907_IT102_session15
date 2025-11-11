#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int daoNguoc(int n) {
    int dao = 0;
    n = n < 0 ? -n : n;
    int dau = (n != 0 && n < 0) ? -1 : 1;
    
    while (n > 0) {
        dao = dao * 10 + n % 10;
        n /= 10;
    }
    return dau * dao;
}

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    printf("So dao nguoc: %d\n", daoNguoc(n));

}



