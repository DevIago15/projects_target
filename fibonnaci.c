#include <stdio.h>

int fibonacci(int n, int fib[]) {
    fib[0] = 0;
    fib[1] = 1;
    int i = 2;
    while(fib[i-1] + fib[i-2] <= n) {
        fib[i] = fib[i-1] + fib[i-2];
        i++;
    }
    return i;
}

int main() {
    int num;
    int i;
	printf("Digite um Numero: ");
    scanf("%d", &num);
    int fib_seq[num];
    int seq_length = fibonacci(num, fib_seq);

    int found = 0;
    for (i = 0; i < seq_length; i++) {
        if (num == fib_seq[i]) {
            found = 1;
            break;
        }
    }

    if (found) {
    	printf("O Numero %d Faz Parte da Sequencia de Fibonacci.\n", num);
	} else{
		printf("O Numero %d Nao Faz Parte da Sequencia de Fibonacci.\n", num);
	}
    return 0;
}
