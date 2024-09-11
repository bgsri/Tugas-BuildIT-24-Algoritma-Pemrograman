#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
        for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int sizearray ;
        scanf("%d", &sizearray);
    int arr[sizearray+1];
            for (int i = 0; i < sizearray; i++) {
        scanf("%d", &arr[i]); }
    
        bubbleSort(arr, sizearray);

    for (int i = 0; i < sizearray; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
