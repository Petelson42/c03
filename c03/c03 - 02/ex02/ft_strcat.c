#include <stdio.h>


char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    // Encontrar o final da string dest
    while (dest[i] != '\0')
    {
        i++;
    }

    // Concatenar os caracteres de src em dest
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Adicionar o caractere nulo no final
    dest[i] = '\0';

    // Retorna o ponteiro para a string de destino
    return dest;
}



int main(void)
{
    char dest[50] = "Olá, ";
    char src[] = "mundo!";

    printf("Resultado de ft_strcat: %s\n", ft_strcat(dest, src));  // Esperado: "Olá, mundo!"
    
    return 0;
}