#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime( long long N) {
    if(N <= 1){
        return 0;
}
    if(N == 2 || N == 3){
        return 1;
    }
    if(N % 2 == 0 || N % 3 == 0){
        return 0;
    }
    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2 ) == 0 ) {
            return 0;
        }
    }
    return 1;
}
int main () {
    int number;
    scanf("%d", &number);
    if(isPrime( number ))
        printf("PRIMA");
    else{printf("BUKAN");
        }
}