#include <stdio.h>
#include <string.h>
int main() 
{
	FILE *fp; char arq[100];
	do
	{
		printf("\nDigite o nome do arquivo: ");
		fflush(stdin); gets(arq);
	}while(strlen(arq)==0);
	fp=fopen (arq,"r+"); // abre para leitura escrita; se o arquivo n�o existir, gera erro
	if (fp==NULL) 
	{ 
	 	printf ("Erro na abertura do arquivo"); 
 		fclose(fp);
 		return 0;
	}
	int tam, num_linha=0, total=0, ct; 
	char entrada[100], busca[100]; 
	char *c, a;
	do
	{
		printf("\nDigite a expressao que sera procurada (um caractere ou mais): ");
		fflush(stdin); gets(busca);
		tam = strlen(busca); // strlen = quantos caracteres possui uma string
	}while(tam==0);
	printf("\nTamanho da expressao em caracteres = %d\n\n",tam);
	while(!feof(fp)) //enquanto n�o for fim de arquivo (! => n�o)
	{
	 	c = fgets(entrada, 101, fp); // l� uma express�o com 100 caracteres, que seria o tamanho de uma linha deste arquivo
	 	if (c) printf("%d:%s",++num_linha,entrada);
	 	if (strstr(entrada,busca)!=0) total++;
 	}
 	printf("\n\nA expressao %s existe no arquivo em %d linha(s)",busca,total);
 	rewind(fp);
    fclose(fp);
}
