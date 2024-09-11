#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int FunctionA (char A[], char B[])
{
    if (strlen(A) != strlen(B)){ 
    return 1;}
    return 0;
}

int FunctionB (char A[], char B[]){
    for (int i = 0; i < strlen(A); i++){
        if (A[i] != B[i]){
            return 1;
        }
    } return 0;
}

int main() {
    char A[100], B[100];
        scanf("%s %s", A, B);
            if (FunctionA(A, B)) {
            printf("BERBEDA");
            }
    else if (FunctionB(A, B)) {
            printf("MIRIP");    
            }
    else   {printf("IDENTIK");
           }
    return 0;
}
