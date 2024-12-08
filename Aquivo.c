#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
typedef struct {
    int op;
} VariaveisGlobais;
VariaveisGlobais vrg = {0};
void questoes(VariaveisGlobais *vrg);
FILE *pArquivo;

int main(){
    pArquivo = fopen ("TreinandoArquivosEmC.txt", "a+");
    if(pArquivo == NULL){
        printf("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    else{
        printf("Arquivo aberto com sucesso\n");
    }
    printf("Ola digite a quaestão que deseija acessar:");
    questoes(&vrg);

    if(fclose(pArquivo) == 0){
            printf("Arquivo fechado com secesso");
        }
    else{
        printf("Erro ao fechar o arquivo");
    }
    return 0;
}
void questoes(VariaveisGlobais * vrg){
    printf("\n 1\n>>");
    scanf("%d",&vrg->op);
    fprintf(pArquivo,"Opção: %d\n",vrg->op);
    return;
}
