#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região]
#include <string.h> //biblioteca responsável por cuidas das string

int registro()//Função responsável por cadastrar os usuários no sistema
{
	//início criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final criação de variáveis/string
	printf("Digite o cpf a ser cadastrado:");//coletando informação do usuário
	scanf("%s", cpf);//%s refere-se a strings
	
	strcpy(arquivo, cpf);//responsável por copiar os valores das string
	
		FILE *file;//cria o arquivo no banco de dados
		file= fopen(arquivo, "w");//cria o arquivo e o "w" significa escrever
		fprintf(file,cpf);//salva o valor da variável
		fclose(file);//fecha o arquivo
		
		file=fopen(arquivo,"a");//para atualizar as informações do arquivo 
		fprintf(file,",");//para adicionar vírgula
		fclose(file);//fechar o arquivo
		
	
			printf("Digite um nome a se cadastrado:");//coletando informações do usuário
			scanf ("%s", nome);
		
			file=fopen(arquivo, "a");
			fprintf(file,nome);
			fclose(file);
			
			file=fopen (arquivo,"a");//para atualizar as informações do arquivo 
			fprintf(file,",");
			fclose(file);
			
				printf("Digite o sobrenome a ser cadastrado:");
				scanf ("%s",sobrenome);
				
				file=fopen(arquivo, "a");
				fprintf(file,sobrenome);
				fclose(file);
			
				file=fopen (arquivo,"a");//para atualizar as informações do arquivo 
				fprintf(file,",");
				fclose(file);
			
					printf("Digite o cargo a ser cadastrado:");
					scanf("%s", cargo);
					
					file=fopen(arquivo, "a");
					fprintf(file, cargo);
					fclose(file);
					
					file=fopen (arquivo,"a");//para atualizar as informações do arquivo 
					fprintf(file,",");
					fclose(file);
					
}

int consultar()
{
	setlocale(LC_ALL,"Portuguese");//definindo a linguagem
	
		char cpf[40];//variável
		char conteudo[200];//variável
	
			printf("Digite o cpf a ser consultado:");
			scanf("%s",cpf);
	
			FILE*file;
			file = fopen(cpf,"r");
	
			if(file==NULL)//se o arquivo for nulo
			{
				printf("Não foi possível localizar o arquivo! \n");
			}
			
				while(fgets(conteudo, 200, file) !=NULL)
				{
					printf("\nEssas são as informações do usuário:");
					printf("%s", conteudo);
					printf("\n\n");
}
	
	system("Pause");

}

int deletar ()
{
	char cpf[40];//variável
	
	printf("Digite o cpf do usuário que deseja deletar:");//mensagem que aparece para o usuário
	
	scanf("%s",cpf);//o "%s" refere-se a strings
	
	remove(cpf);//para deletar o cpf digitado pelo usuário
	
	FILE*file;
	file = fopen(cpf, "r");
	
	if(file==NULL)
	{
		printf("O usuário não se encontra no sistema!\n");
		system("pause");
	}
	
}


int main()
	{
	int opcao=0;//definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls");//respnsável por limpar a tela
		
		setlocale(LC_ALL,"Portuguese");//definindo a linguagem
	
		printf("#### Cartório da EBAC ####\n\n\n");//início do menu
		printf("Escolha a opção que deseja no menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");
		printf("\t4 - Sair do sistema\n\n");
		printf("Digite a opção desejada:");//fim do menu
		
	scanf("%d", &opcao);//armazenando a escolha do usuário
	
	system("cls");//respnsável por limpar a tela
	
	switch(opcao)//inicio do menu
	{
		case 1:
		registro ();//chamada de funções
		break;
		
		case 2:
		consultar ();//chamada de funções
		break;
		
		case 3:	
		deletar ();//chamada de funções
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema!");
		return 0;
		break;
		
		
		default://caso o usuário não selecione nenhuma das opções
		printf("Esta opção não está disponível\n");
		system("pause");
		break;
	}//fim da seleção
	
	}
}

