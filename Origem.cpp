#include<stdio.h>
#include<stdlib.h>
#include<string.h>//bibliotecas

#define TAM 100//defini��o de tamanho dos vetores
void menu();//menu
int main()//fun��o principal
{
	int i, opcao,qt[TAM],qtitens=0;
	float  valorTotal[TAM],valorfinal=0;//declara��o das vari�veis
	char produto[TAM][30];

	strcpy_s(produto[0], "cachorro-quente v.unit-5.00 ");//transfer�ncia das springs para a matriz
	strcpy_s(produto[1], "x-salada  v.unit-8.79");
	strcpy_s(produto[2], "x-bacon  v.unit-9.99");
	strcpy_s(produto[3], "misto  v.unit-6.89");
	strcpy_s(produto[4], "salada  v.unit-4.80");
	strcpy_s(produto[5], "agua  v.unit-3.49 ");
	strcpy_s(produto[6], "refrigerante  v.unit-4.99");


	menu();//o menu � chamado
	scanf_s("%d", &opcao);//leitura da op��o escolhida
	
	while ((opcao >= 1) && (opcao <= 7))//condi��o
	{

		switch (opcao)
		{
		case 1://primeira op��o
			printf("Item selecionado:\n");//dados do item escolhido
		puts(produto[0]);//impress�o do nome e pre�o unit�rio do item
			printf("Quantidade:");//imprime quantidade
			scanf_s("%d", &qt[0]);//l� quantidade
			valorTotal[0] = qt[0] * 5.00;//c�lculo do valor de acordo com a quantidade
			printf("valor total:%.2f", valorTotal[0]);//imprime o valor total
			printf("\n\n");//pular linha
			//obs:os demais cases recebem as mesmas defini��es
			break;
		case 2://segunda op��o
			printf("Item selecionado:\n");//dados do item escolhido
			puts(produto[1]);
			printf("Quantidade:");
			scanf_s("%d", &qt[1]);
			valorTotal[1] = qt[1] * 8.79;
			printf("valor total:%.2f", valorTotal[1]);
			printf("\n\n");

			break;
		case 3://terceira op��o
			printf("Item selecionado:\n");//dados do item escolhido
			puts(produto[2]);
			printf("Quantidade:");
			scanf_s("%d", &qt[2]);
			valorTotal[2] = qt[2] * 9.99;
			printf("valor total:%.2f", valorTotal[2]);
			printf("\n\n");

			break;
		case 4://quarta op��o
			printf("Item selecionado:\n");//dados do item escolhido
			puts(produto[3]);
			printf("Quantidade:");
			scanf_s("%d", &qt[3]);
			valorTotal[3] = qt[3] * 6.89;
			printf("valor total:%.2f", valorTotal[3]);
			printf("\n\n");
			break;
		case 5://quinta op��o
			printf("Item selecionado:\n");//dados do item escolhido
			puts(produto[4]);
			printf("Quantidade:");
			scanf_s("%d", &qt[4]);
			valorTotal[4] = qt[4] * 4.80;
			printf("valor total:%.2f", valorTotal[4]);
			printf("\n\n");

			break;
		case 6://sexta op��o
			printf("Item selecionado:\n");//dados do item escolhido
			puts(produto[5]);
			printf("Quantidade:");
			scanf_s("%d", &qt[5]);
			valorTotal[5] = qt[5] * 3.49;
			printf("valor total:%.2f", valorTotal[5]);
			printf("\n\n");
			break;
		case 7://s�tima op��o
			printf("Item selecionado:\n");//dados do item escolhido
			puts(produto[6]);
			printf("Quantidade:");
			scanf_s("%d", &qt[6]);
			valorTotal[6] = qt[6] * 4.99;
			printf("valor total:%.2f", valorTotal[6]);
			printf("\n\n");
			break;




		default:
			break;

		}
		printf("Escolha os itens de 1_7 ou digite 8 para finalizar:\n");//sugere a escolha mais produtos ou encerrar

		scanf_s("%d", &opcao);//leitura da op��o
	}
	for (i = 0;i < TAM;i++)//condi��o
	{
		if (qt[i] > 0)//estrutura de sele��o
		{
			puts(produto[i]);//imprime nome do produto
			printf("Quantidade:%d", qt[i]);//imprime a quntidade
			printf("\n");
			printf("Total:%.2f", valorTotal[i]);//imprime valor total por produto
			printf("\n");
			printf("\n");
			qtitens = qtitens + qt[i];//c�lculo da quntidade de itens comprados
			valorfinal = valorfinal + valorTotal[i];//c�lculo do valor a pagar
		}

	}
	
	printf("Quantidade de itens comprados:%d", qtitens);//imprime o numero de itens comprados
	printf("\n");
	
	printf("Valor a pagar:%.2f\n", valorfinal);//imprime o valor a pagar
	printf("\n");


	system("pause");//pausa a tela
	return 0;//retorno
}
		void menu()//fun��o para colocar o menu
		{
			
			printf("CARDAPIO:\n");
			printf("1- cachorro quente-   R$5,00 \n");//menu
			printf("2- x_salada-          R$8,79\n");
			printf("3- x_bacon-            R$9,99\n");
			printf("4- misto -            R$6,89\n");
			printf("5- salada-             R$ 4,80\n");
			printf("6- agua                R$3,49\n");
			printf("7- refrigerante-       R$4,99\n");
			printf("8- Itens escolhidos:");
			printf("\n");
			printf("Faca seu pedido usando numeros de 1_7:\n");
		}
		
		
			
				
			

			

		

		
		
		




		