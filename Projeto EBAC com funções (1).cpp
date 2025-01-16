#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o]
#include <string.h> //biblioteca respons�vel por cuidas das string

int registro()//Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//in�cio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final cria��o de vari�veis/string
	printf("Digite o cpf a ser cadastrado:");//coletando informa��o do usu�rio
	scanf("%s", cpf);//%s refere-se a strings
	
	strcpy(arquivo, cpf);//respons�vel por copiar os valores das string
	
		FILE *file;//cria o arquivo no banco de dados
		file= fopen(arquivo, "w");//cria o arquivo e o "w" significa escrever
		fprintf(file,cpf);//salva o valor da vari�vel
		fclose(file);//fecha o arquivo
		
		file=fopen(arquivo,"a");//para atualizar as informa��es do arquivo 
		fprintf(file,",");//para adicionar v�rgula
		fclose(file);//fechar o arquivo
		
	
			printf("Digite um nome a se cadastrado:");//coletando informa��es do usu�rio
			scanf ("%s", nome);
		
			file=fopen(arquivo, "a");
			fprintf(file,nome);
			fclose(file);
			
			file=fopen (arquivo,"a");//para atualizar as informa��es do arquivo 
			fprintf(file,",");
			fclose(file);
			
				printf("Digite o sobrenome a ser cadastrado:");
				scanf ("%s",sobrenome);
				
				file=fopen(arquivo, "a");
				fprintf(file,sobrenome);
				fclose(file);
			
				file=fopen (arquivo,"a");//para atualizar as informa��es do arquivo 
				fprintf(file,",");
				fclose(file);
			
					printf("Digite o cargo a ser cadastrado:");
					scanf("%s", cargo);
					
					file=fopen(arquivo, "a");
					fprintf(file, cargo);
					fclose(file);
					
					file=fopen (arquivo,"a");//para atualizar as informa��es do arquivo 
					fprintf(file,",");
					fclose(file);
					
}

int consultar()
{
	setlocale(LC_ALL,"Portuguese");//definindo a linguagem
	
		char cpf[40];//vari�vel
		char conteudo[200];//vari�vel
	
			printf("Digite o cpf a ser consultado:");
			scanf("%s",cpf);
	
			FILE*file;
			file = fopen(cpf,"r");
	
			if(file==NULL)//se o arquivo for nulo
			{
				printf("N�o foi poss�vel localizar o arquivo! \n");
			}
			
				while(fgets(conteudo, 200, file) !=NULL)
				{
					printf("\nEssas s�o as informa��es do usu�rio:");
					printf("%s", conteudo);
					printf("\n\n");
}
	
	system("Pause");

}

int deletar ()
{
	char cpf[40];//vari�vel
	
	printf("Digite o cpf do usu�rio que deseja deletar:");//mensagem que aparece para o usu�rio
	
	scanf("%s",cpf);//o "%s" refere-se a strings
	
	remove(cpf);//para deletar o cpf digitado pelo usu�rio
	
	FILE*file;
	file = fopen(cpf, "r");
	
	if(file==NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}
	
}


int main()
	{
	int opcao=0;//definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls");//respns�vel por limpar a tela
		
		setlocale(LC_ALL,"Portuguese");//definindo a linguagem
	
		printf("#### Cart�rio da EBAC ####\n\n\n");//in�cio do menu
		printf("Escolha a op��o que deseja no menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");
		printf("\t4 - Sair do sistema\n\n");
		printf("Digite a op��o desejada:");//fim do menu
		
	scanf("%d", &opcao);//armazenando a escolha do usu�rio
	
	system("cls");//respns�vel por limpar a tela
	
	switch(opcao)//inicio do menu
	{
		case 1:
		registro ();//chamada de fun��es
		break;
		
		case 2:
		consultar ();//chamada de fun��es
		break;
		
		case 3:	
		deletar ();//chamada de fun��es
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema!");
		return 0;
		break;
		
		
		default://caso o usu�rio n�o selecione nenhuma das op��es
		printf("Esta op��o n�o est� dispon�vel\n");
		system("pause");
		break;
	}//fim da sele��o
	
	}
}

