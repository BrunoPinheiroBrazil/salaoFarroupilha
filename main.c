#include <stdio.h>
#include <stdlib.h>


/*Na Semana Farroupilha, o CTG de uma cidade do interior decidiu dar um baile para as fam�lias da regi�o.
Para isso, alugou um sal�o de festas, o qual tinha a capacidade m�xima para n pessoas.
Para garantir a seguran�a das fam�lias, o patr�o do CTG ordenou que um pe�o controlasse a entrada do sal�o, 
n�o permitindo a entrada de pessoas caso a capacidade m�xima tenha sido atingida.
Assim que atingisse a capacidade, o pe�o deveria fechar a porta e apresentar ao patr�o a quantidade de pessoas e a quantidade de fam�lias que entraram.
As fam�lias deveriam entrar completas, n�o sendo permitido entrar parte da fam�lia.
Fa�a um programa em C que leia a quantidade de pessoas que comp�e cada fam�lia e alerte quando o limite de pessoas no sal�o for ultrapassado 
pelos componentes da fam�lia n�o permitindo a entrada desta.
A cada fam�lia que entrar no sal�o, exibir a quantidade de pessoas que j� est�o dentro do sal�o. Assim que o sal�o atingir seu limite m�ximo, 
apresente a quantidade de pessoas e a quantidade de fam�lias que entraram no sal�o.
*/

int main(int argc, char *argv[]) {
	
	int quantidadeFamilias=0;
	int quantidadePessoas=0;
	int quantidadePessoasAtualTotal=0;
	int capacidadeMaxima=0;
	
	printf("Bem vindo ao programa Controle de acesso de pessoas\n");
	printf("Pressione alguma tecla para continuar...\n");
	
	printf("Insira a capacidade maxima do salao: \n");
	scanf("%d", &capacidadeMaxima);
	
	getchar();
	
	while(quantidadePessoasAtualTotal <= capacidadeMaxima)
	{
		quantidadePessoas = 0;
		
		printf("Bem vinda familia numero %d \n", quantidadeFamilias+1);
		printf("Insira a quantidade de pessoas da familia que ira entrar:\n");
		scanf("%d", &quantidadePessoas);
		
		if((quantidadePessoasAtualTotal + quantidadePessoas) < capacidadeMaxima)
		{
		    quantidadePessoasAtualTotal += quantidadePessoas;
		    printf("\n-------------------\n");
		    printf("O salao esta com %d pessoas\n", quantidadePessoasAtualTotal);
		    if(capacidadeMaxima - quantidadePessoasAtualTotal > 0)
		    {
		    	printf("Ainda tem %d de capacidade restante!\n", (capacidadeMaxima - quantidadePessoasAtualTotal));
			}
			
		    printf("-------------------\n\n");
		}
		else
		{
		    printf("O salao ja chegou a sua capacidade total!\n");
		    printf("Fechando as portas do salao!!\n");
		    break;
		}
		
		quantidadeFamilias++;
		
	}
	
	printf("O salao fechou as portas com %d familias", quantidadeFamilias+1);
	printf("O salao comportou o total de %d pessoas", quantidadePessoasAtualTotal);
	int lugaresRestantes = capacidadeMaxima - quantidadePessoasAtualTotal;
	if(lugaresRestantes > 0)
	{
		printf("Ainda sobraram %d lugares no salao", lugaresRestantes);
	}
	else
	{
		printf("O salao ficou totalmente cheio! Todos lugares aproveitados!!");
	}
}
