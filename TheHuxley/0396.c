#include <stdio.h>
int main() {
    int qtdVeiculo = 0, cont = 0;
    double caixaTotal = 0;

    while (qtdVeiculo != 999) {
        scanf("%d", &qtdVeiculo);

        if (qtdVeiculo > 2 && qtdVeiculo != 999) {
            caixaTotal += (qtdVeiculo - 2) * 12.89;
            cont++;
        }
    }

    printf("%.2lf\n", caixaTotal);
    printf("%d", cont);

    return 0;
}
