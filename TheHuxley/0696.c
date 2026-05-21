#include <stdio.h>
int main() {
    int v[1000], i, num, cont = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &num);

    for (i = 0; i < 10; i++) {
        if (v[i] == num) {
            cont++;
        }
    }
    printf("%d", cont);

    return 0;
}
