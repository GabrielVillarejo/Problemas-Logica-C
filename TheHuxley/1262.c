#include <stdio.h>
int main() {
    int num, x, vetorNotas[1000], vetorNOM[1000];
    double soma = 0, somaPesos = 0, mediaPonderada;

    scanf("%d", &num);

    for (x = 0; x < num; x++) {
        scanf("%d", &vetorNotas[x]);
    }

    for (x = 0; x < num; x++) {
        scanf("%d", &vetorNOM[x]);
    }

    for (x = 0; x < num; x++) {
        soma += vetorNotas[x] * vetorNOM[x];
        somaPesos += vetorNOM[x];
    }

    mediaPonderada = soma / somaPesos;
    printf("%.2lf\n", mediaPonderada);

    return 0;
}
