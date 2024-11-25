#include <stdio.h>

int main() {
    int N;
    scanf_s("%d", &N);

    if (N > 100) {
        printf("Error\n");
        return 1;
    }

    int A[100]; 
    
    for (int i = 0; i < N; i++) {
        scanf_s("%d", &A[i]);
    }

    int sum = 0;
    int count = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] < 0) {
            sum += A[i];
            count++;
        }
    }
    
    
    if (count > 0) 
    {
        int average = sum / count;
        printf("Average of negative numbers is: %d", average);
    }
    else {
        printf("Need to be negative\n");
    }

   
}