
#include <stdio.h>
#include <string.h>

int main()
{
	//---variáveis---
	char c1_estado;
	char c1_codigo[5];
	char c1_nome[50];
	int c1_populacao;
	float c1_area;
	float c1_pib;
	int c1_pontos_turisticos;
	float c1_densidade;
	float c1_pibpc;

	char c2_estado;
	char c2_codigo[5];
	char c2_nome[50];
	int c2_populacao;
	float c2_area;
	float c2_pib;
	int c2_pontos_turisticos;
	float c2_densidade;
	float c2_pibpc;

	//---Criação de cartas---

	//---Carta 1---
	printf("carta 1:\n");

	printf("digite um estado (primeira letra):\n");
	scanf(" %s", &c1_estado);

	printf("digite o código: (de 01 a 04)\n");
	scanf( " %s", c1_codigo);

	printf("digite o nome da cidade:\n");
	scanf(" %s", c1_nome);

	printf("digite o tamanho da população\n");
	scanf(" %d", &c1_populacao);

	printf("digite o tamanho do pib (em bilhões)\n");
	scanf(" %f", &c1_pib);

	printf("digite a área (kilometros quadrados)\n");
	scanf(" %f", &c1_area);

	printf("digite a quantidade de pontos turisticos\n\n");
	scanf(" %d", &c1_pontos_turisticos);

	//---Carta 2---
	printf("carta 2:\n\n");

	printf("digite um estado (primeira letra):\n");
	scanf(" %s", &c2_estado);

	printf("digite o código: (de 01 a 04)\n");
	scanf( " %s", c2_codigo);

	printf("digite o nome da cidade:\n");
	scanf(" %s", c2_nome);

	printf("digite o tamanho da população\n");
	scanf(" %d", &c2_populacao);

	printf("digite o tamanho do pib (em bilhões)\n");
	scanf(" %f", &c2_pib);

	printf("digite a área (kilometros quadrados)\n");
	scanf(" %f", &c2_area);

	printf("digite a quantidade de pontos turisticos\n");
	scanf(" %d", &c2_pontos_turisticos);

	//--------Calculo---------

	c1_densidade = (float) c1_populacao / c1_area;
	c1_pibpc = (float) c1_pib / c1_populacao;

	c2_densidade = (float) c2_populacao / c2_area;
	c2_pibpc = (float) c2_pib / c2_populacao;

	//---Exibição de Cartas---

	printf("carta 1:\n\n");
	printf("Estado: %c\n", c1_estado);
	printf("Código: %c%s\n", c1_estado, c1_codigo);
	printf("Nome da cidade: %s\n", c1_nome);
	printf("População: %d\n", c1_populacao);
	printf("Área: %f km²\n", c1_area);
	printf("PIB: %f bilhões de reais\n", c1_pib);
	printf("Número de Pontos Turisticos: %d\n", c1_pontos_turisticos);
	printf("Densidade: %f hab/km²\n", c1_densidade);
	printf("Pib Per Capita: %f reais\n\n", c1_pibpc);

	printf("carta 2:\n\n");
	printf("Estado: %c\n", c2_estado);
	printf("Código: %c%s\n", c2_estado, c2_codigo);
	printf("Nome da cidade: %s\n", c2_nome);
	printf("População: %d\n", c2_populacao);
	printf("Área: %f km²\n", c2_area);
	printf("PIB: %f reais\n", c2_pib);
	printf("Número de Pontos Turisticos: %d\n", c2_pontos_turisticos);
	printf("Densidade: %f hab/km²\n", c2_densidade);
	printf("Pib Per Capita: %f reais\n\n", c2_pibpc);


	return 0;
}
