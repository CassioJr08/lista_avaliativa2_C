#include <stdio.h>

void minhaFuncao(int v[], int n) {
    while (n > 1) {
        for (int i = 0; i < n - 1; i++){
            v[i] = v[i] + v[i + 1];
        }
        n--;
        for(int i = 0; i < n; i++) {
            printf("%d", v[i]);
            if (i < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int v[10];
    for (int i=0 ; i < 10; i++){
        scanf("%d", &v[i]);
    }
    for (int i=0 ; i < 10; i++){
        printf("%d", v[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");
    minhaFuncao(v, 10);

    return 0;
}
