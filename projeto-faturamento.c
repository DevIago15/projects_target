#include <stdio.h>

int main(){
	float sp = 67836.43;
	float rj = 36678.66;
	float mg = 29229.88;
	float es = 27165.48;
	float outros = 19849.53;
	
	// calculo do faturamento mensal
	float faturamentoMensal = sp + rj + mg + es + outros;
	
	// saida de dados
	printf("Percentual de Representacao que Cada Estado Obteve:\n");
	printf("Estado de SP: %.2f%%\n", (sp / faturamentoMensal) * 100);
	printf("Estado de RJ: %.2f%%\n", (rj / faturamentoMensal) * 100);
	printf("Estado de MG: %.2f%%\n", (mg / faturamentoMensal) * 100);
	printf("Estado de ES: %.2f%%\n", (es / faturamentoMensal) * 100);	
	printf("Outros Estados: %.2f%%\n", (outros / faturamentoMensal) * 100);	
	
	return 0;
}