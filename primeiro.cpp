#include<stdio.h>

main()
{
    FILE *fp;
    if((fp = fopen ("teste.txt", "w"))==NULL) printf("Erro na abertura do arquivo");
    else printf("Arquivo aberto com sucesso");
    fclose(fp);
}