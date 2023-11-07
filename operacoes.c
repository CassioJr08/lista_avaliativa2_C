#include <stdio.h>
#define N 4

void soma(int A[][N], int B[][N], int C[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void sub(int A[][N], int B[][N], int C[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void mult(int A[][N], int B[][N], int C[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int matriz[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[N][N], B[N][N], C[N][N];
    char operacao[4];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        soma(A, B, C);
    } else if (strcmp(operacao, "sub") == 0) {
        sub(A, B, C);
    } else if (strcmp(operacao, "mult") == 0) {
        mult(A, B, C);
    }

    printMatrix(C);

    return 0;
}
