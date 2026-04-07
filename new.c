#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 512

int main() {
    double (*A)[N] = malloc(N * N * sizeof(double));
    double (*B)[N] = malloc(N * N * sizeof(double));
    double (*C)[N] = malloc(N * N * sizeof(double));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = (double)(i + j) / N;
            B[i][j] = (double)(i - j) / N;
            C[i][j] = 0.0;
        }
    }

    clock_t start = clock();

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    double time_spent = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("Matrix mul %dx%d completed in %.3f seconds\n", N, N, time_spent);
    printf("C[0][0] = %.3f\n", C[0][0]);

    free(A); free(B); free(C);
    return 0;
} 
