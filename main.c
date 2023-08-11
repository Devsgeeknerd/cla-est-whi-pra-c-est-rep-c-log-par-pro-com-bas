#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome = "";
    while (strcmp(&nome, "PARAR") != 0)
    {
        printf("Digite o nome: ");
        scanf("%s", &nome);
        printf("Ola, %s\n", &nome);
    }
    return 0;
}
