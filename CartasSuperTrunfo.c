
#include <stdio.h>
#include <string.h>

int main()
{
	char c1_estado;
	char c1_codigo[5];
	char c1_nome[50];
	int c1_populacao;
	float c1_area;
	float c1_pib;
	int c1_pontos_turisticos;

	char c2_estado;
	char c2_codigo[5];
	char c2_nome[50];
	int c2_populacao;
	float c2_area;
	float c2_pib;
	int c2_pontos_turisticos;

	printf("carta 1:\n");

	printf("digite um estado (primeira letra):\n");
	scanf(" %s", &c1_estado);

	printf("digite o código: (de 01 a 04)\n");
	scanf( " %s", c1_codigo);

	printf("digite o nome da cidade:\n");
	scanf(" %s", c1_nome);

	printf("digite o tamanho da população\n");
	scanf(" %d", &c1_populacao);

	printf("digite o tamanho do pib\n");
	scanf(" %f", &c1_pib);

	printf("digite a área (kilometros quadrados)\n");
	scanf(" %f", &c1_area);

	printf("digite a quantidade de pontos turisticos\n\n");
	scanf(" %d", &c1_pontos_turisticos);

	printf("carta 2:\n\n");

	printf("digite um estado (primeira letra):\n");
	scanf(" %s", &c2_estado);

	printf("digite o código: (de 01 a 04)\n");
	scanf( " %s", c2_codigo);

	printf("digite o nome da cidade:\n");
	scanf(" %s", c2_nome);

	printf("digite o tamanho da população\n");
	scanf(" %d", &c2_populacao);

	printf("digite o tamanho do pib\n");
	scanf(" %f", &c2_pib);

	printf("digite a área (kilometros quadrados)\n");
	scanf(" %f", &c2_area);

	printf("digite a quantidade de pontos turisticos\n");
	scanf(" %d", &c2_pontos_turisticos);

	printf("carta 1:\n\n");
	printf("Estado: %c\n", c1_estado);
	printf("Código: %c%s\n", c1_estado, c1_codigo);
	printf("Nome da cidade: %s\n", c1_nome);
	printf("População: %d\n", c1_populacao);
	printf("Área: %f km²\n", c1_area);
	printf("PIB: %f\n", c1_pib);
	printf("Número de Pontos Turisticos: %d\n\n", c1_pontos_turisticos);

	printf("carta 2:\n\n");
	printf("Estado: %c\n", c2_estado);
	printf("Código: %c%s\n", c2_estado, c2_codigo);
	printf("Nome da cidade: %s\n", c2_nome);
	printf("População: %d\n", c2_populacao);
	printf("Área: %f km²\n", c2_area);
	printf("PIB: %f\n", c2_pib);
	printf("Número de Pontos Turisticos: %d\n", c2_pontos_turisticos);


	return 0;
}
