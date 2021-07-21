#include <stdio.h>
#include <string.h>
int main()
{
FILE *fp; int op; char entrada[100]; char *c;
do
{
do
{
printf("\n1 - Criar e digitar conteudo 2 - Ler e imprimir 3 - Encerrar --> ");
scanf("%d",&op);
}while(op<1 || op>3);
switch(op)
{
case 1 : fp=fopen ("teste.txt","w");
if (fp==NULL)
{
printf ("Erro na abertura do arquivo");
fclose(fp);
return 0;
}
printf("\nDigite suas frases (FIM para sair): \n");
for(;;)
{
fflush(stdin); gets(entrada);
if(strcmp(entrada,"FIM")==0) break;
strcat(entrada,"\n");
fprintf(fp,entrada);
}
fclose(fp);
break;
case 2 : fp=fopen ("teste.txt","r"); // r = somente leitura
if (fp==NULL)
{
printf ("Erro na abertura do arquivo");
fclose(fp);
return 0;
}
printf("\nConteudo do arquivo: \n\n");
while(!feof(fp))
{
c = fgets(entrada, 101, fp);
if (c) printf("%s",entrada);
}
fclose(fp);
case 3 : break;
}
}while(op!=3);
}
