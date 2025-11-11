#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int removeDuplicates(int arr[], int size) {
    if (size <= 1) return size;
    
    int newSize = 1;
    
    for (int i = 1; i < size; i++) {
        int found = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            arr[newSize++] = arr[i];
        }
    }
    return newSize;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int newSize = removeDuplicates(arr, n);
    
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", newSize);
    
    return 0;
}

