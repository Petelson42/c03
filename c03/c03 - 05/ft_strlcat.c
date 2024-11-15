#include <stdio.h>

unsigned int ft_strlen(char *str)
{
    unsigned int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = ft_strlen(dest);  // Tamanho atual de 'dest'
    unsigned int src_len = ft_strlen(src);    // Tamanho de 'src'
    unsigned int i = 0;

    // Se o tamanho total (size) for menor ou igual ao tamanho de 'dest', não podemos concatenar nada
    if (size <= dest_len)
        return size + src_len;

    // Copiar os caracteres de 'src' para 'dest' até o limite de espaço
    while (src[i] != '\0' && (dest_len + i + 1) < size)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Adicionar o caractere nulo se houver espaço suficiente
    dest[dest_len + i] = '\0';

    // Retornar o comprimento total da string resultante
    return dest_len + src_len;
}



int main(void)
{
    char dest[30] = "Hello, ";
    char src[] = "world!";

    unsigned int len = ft_strlcat(dest, src, 30);

    printf("Resultado: %s\n", dest);  // Deveria imprimir: "Hello, world!"
    printf("Comprimento total: %u\n", len);  // Deveria imprimir o comprimento total

    return 0;
}