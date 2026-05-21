#include <stdio.h>
int main() {
    int num, v[1000], i;
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        scanf("%d", &v[i]);
    }

    for (i = num - 1; i >= 0; i--) {
        printf("%d", v[i]);
        if (i > 0) {
            printf(" ");
        }
    }

    return 0;
}
