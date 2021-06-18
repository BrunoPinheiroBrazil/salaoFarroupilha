#include <stdio.h>
#include <stdlib.h>


/*Na Semana Farroupilha, o CTG de uma cidade do interior decidiu dar um baile para as famílias da região.
Para isso, alugou um salão de festas, o qual tinha a capacidade máxima para n pessoas.
Para garantir a segurança das famílias, o patrão do CTG ordenou que um peão controlasse a entrada do salão, 
não permitindo a entrada de pessoas caso a capacidade máxima tenha sido atingida.
Assim que atingisse a capacidade, o peão deveria fechar a porta e apresentar ao patrão a quantidade de pessoas e a quantidade de famílias que entraram.
As famílias deveriam entrar completas, não sendo permitido entrar parte da família.
Faça um programa em C que leia a quantidade de pessoas que compõe cada família e alerte quando o limite de pessoas no salão for ultrapassado 
pelos componentes da família não permitindo a entrada desta.
A cada família que entrar no salão, exibir a quantidade de pessoas que já estão dentro do salão. Assim que o salão atingir seu limite máximo, 
apresente a quantidade de pessoas e a quantidade de famílias que entraram no salão.
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
