#include <stdio.h>
int main() {
    int num, i;
    char palavra[1000];

    scanf("%d", &num);

    while (num != 0) {
        getchar();

        for (i = 0; i < num; i++) {
            scanf("%c", &palavra[i]);
        }

        for (i = num - 1; i >= 0; i--) {
            printf("%c", palavra[i]);
        }
        printf("\n");

        scanf("%d", &num);
    }

    return 0;
}
