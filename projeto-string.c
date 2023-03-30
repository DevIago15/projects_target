#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
	
	int i;
    int len = strlen(str); // armazena o comprimento da string
    for (i = 0; i < len / 2; i++) {
        char temp = str[i]; // armazena um caracter temporariamente durante a troca
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
	
	// saida de dados
    printf("Essa Eh Sua String Invertida: %s\n", str);

    return 0;
}
