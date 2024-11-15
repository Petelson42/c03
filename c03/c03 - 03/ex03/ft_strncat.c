#include <stdio.h>


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;
    unsigned int j = 0;

    // Encontrar o final da string dest
    while (dest[i] != '\0')
    {
        i++;
    }

    // Concatenar até nb caracteres de src em dest
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Garantir que dest esteja terminada com '\0'
    dest[i] = '\0';

    // Retorna o ponteiro para a string de destino
    return dest;
}



int main(void)
{
    char dest[50] = "Olá, ";
    char src[] = "mundo maravilhoso!";
    
    printf("Resultado de ft_strncat (copiando até 5 caracteres): %s\n", ft_strncat(dest, src, 5));
    // Esperado: "Olá, mundo"
    
    return 0;
}