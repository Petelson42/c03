#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    
    // Compara até o limite n ou até encontrar uma diferença ou '\0'
    while (i < n && s1[i] && s1[i] == s2[i])
    {
        i++;
    }

    // Retorna a diferença dos caracteres ou 0 se as strings são iguais até o n-ésimo caractere
    if (i == n)
        return 0;
    return (unsigned char)(s1[i]) - (unsigned char)(s2[i]);
}

int main(void)
{
    char str1[] = "Hello";
    char str2[] = "HelLo";

    printf("Resultado de ft_strncmp: %d\n", ft_strncmp(str1, str2, 4));  // Esperado: 0
    printf("Resultado de ft_strncmp: %d\n", ft_strncmp(str1, str2, 5));  // Esperado: valor negativo (diferente no último caractere)
    printf("Resultado de ft_strncmp: %d\n", ft_strncmp(str1, str2, 3));  // Esperado: 0 (mesma comparação até o 3º caractere)
    
    return 0;
}
