#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa Pessoa;
struct Pessoa
{
    char * nome,
    char endereco;
;};

void lerPessoas(int *vetor, int n);

int main(){
    int *pessoas, n, j;

    printf("Digite uma quantidade 'n' de pessoas: ");
    scanf("%d", &n);
    pessoas = (Pessoa*) malloc(sizeof(Pessoa)*n);

    if(pessoas==NULL){
        printf("Falha na alocacao de memoria.");
        exit(1);
    }

    lerPessoas(pessoas, n);

    for(j=0;j<n;j++){
        printf("%d ", pessoas[j]);
    }

    free(pessoas);

    return(0);
}

void lerPessoas(int *vetor, int i){
    int j,k;
    for(j=0;j<i;j++){
        printf("Nome n° %d: ", j);
        scanf("%d", &vetor[j]);
        printf("Endereço n° %d: ", k);
        scanf("%d", &vetor[k]);
    }
}