#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))  // Enquanto as strings não terminarem e os caracteres forem iguais
    {
        s1++;
        s2++;
    }

    // Retorna a diferença entre os primeiros caracteres diferentes ou 0 se forem iguais
    
    return (unsigned char)(*s1) - (unsigned char)(*s2);
}


int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello, World!";
    
    printf("Resultado de ft_strcmp: %d\n", ft_strcmp(str1, str2));  // Esperado: valor negativo
    printf("Resultado de ft_strcmp: %d\n", ft_strcmp(str2, str1));  // Esperado: valor positivo
    printf("Resultado de ft_strcmp: %d\n", ft_strcmp(str1, str1));  // Esperado: 0
    
    return 0;
}