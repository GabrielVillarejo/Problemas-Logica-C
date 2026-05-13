#include <stdio.h>
int main() {
    int numTermo, a = 0, b = 1, soma;
    scanf("%d", &numTermo);

    printf("0\n");
    printf("1\n");

    if (numTermo > 2) {
        for (int i = 0; i < (numTermo - 2); i++) {
            soma = a + b;
            printf("%d\n", soma);

            a = b;
            b = soma;
        }
    }
    return 0;
}
