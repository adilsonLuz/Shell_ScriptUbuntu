
#include <stdio.h>
#include <string.h>
int main()
{
FILE *fp; // cria uma refer�ncia para um arquivo
fp=fopen ("teste.txt","w"); // abre o arquivo --> criando acesso de grava��o para um arquivo (o arquivo � criado --> w)
if (fp==NULL)
{
printf ("Erro na abertura do arquivo"); // fp � um ponteiro; se retornar NULL, algo errado aconteceu
fclose(fp);
return 0;
}
else printf("Arquivo aberto com sucesso");



char entrada[100];
for(int i=1;i<=3;i++)
{
printf("\nDigite a frase %d: ",i); fflush(stdin); gets(entrada);
strcat(entrada,"\n");
fprintf(fp,entrada);
}
fclose(fp); // fecha o arquivo
}
