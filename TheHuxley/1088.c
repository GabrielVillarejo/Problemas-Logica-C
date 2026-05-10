#include <stdio.h>
int main()
{
    int valor;

    do
    {
        scanf("%d", &valor);
        printf("%d\n", valor);
    } while (valor >= 0);

    return 0;
}
