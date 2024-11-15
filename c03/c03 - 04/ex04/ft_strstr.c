#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    // Se 'to_find' for uma string vazia, retorna 'str'
    if (*to_find == '\0')
        return str;

    // Percorrer a string 'str'
    while (*str != '\0')
    {
        // Verificar se a substring 'to_find' começa na posição atual de 'str'
        char *s1 = str;
        char *s2 = to_find;

        while (*s1 == *s2 && *s2 != '\0')
        {
            s1++;
            s2++;
        }

        // Se encontramos uma correspondência completa, retorne o ponteiro para 'str'
        if (*s2 == '\0')
            return str;

        str++;  // Avançar para o próximo caractere de 'str'
    }

    // Se não encontramos nenhuma correspondência, retornar NULL
    return NULL;
}


int main(void)
{
    char str[] = "Olá, mundo! Bem-vindo ao C.";
    char to_find[] = "mundo";

    char *result = ft_strstr(str, to_find);

    if (result != NULL)
    {
        printf("Encontrado: %s\n", result);  // Deveria imprimir: "mundo! Bem-vindo ao C."
    }
    else
    {
        printf("Não encontrado.\n");
    }

    return 0;
}