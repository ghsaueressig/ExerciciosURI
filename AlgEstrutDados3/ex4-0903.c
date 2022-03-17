#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno Aluno;
struct aluno
{
    char * nome;
    char turma;
    float cr;
};

void imprime(Aluno * v, int n){
    int i;
    for (i = 0; i<n; i++) {
    printf("%s, \t%c, %4.1f\n", v[i].nome, v[i].turma, v[i].cr);
}
}

void monta(Aluno * v, int n){
    char * w[] = {"Pedro","Ana","Eva","Fred","Bia","Caio"};
    char c[] = { 'B', 'A', 'B', 'A', 'A', 'B' };
    float cr[] = { 5, 10, 3, 9, 10, 4 };
    int i;
    for (i = 0; i<n; i++) {
        v[i].nome = w[i];
        v[i].turma = c[i];
        v[i].cr = cr[i];
    }
}

int extraiTurma(Aluno * v, int n, char turma, int nt){
    int i;
    char vT;
    vT = (char *)malloc(nt*sizeof(char));
    for (i = 0; i<n; i++) {
        if (v[i].turma = turma) {
            vT[i] = v[i].nome;
        }
    }
}

int main(void){
    Aluno * vt;
    char turma;
    Aluno * v;
    int n = 6;
    int nt;
    v = (Aluno *)malloc(n*sizeof(Aluno));

    monta(v, n);

    printf("Todas as Turmas:\n");
    imprime(v, n);

    turma = 'A';
    vt = extraiTurma(v, n, turma, &nt);

    printf("\nTurma %c\n", turma);
    imprime(vt, nt);

    turma = 'B';
    vt = extraiTurma(v, n, turma, &nt);
    printf("\nTurma %c\n", turma);
    imprime(vt, nt);


    printf("TESTE DE MUDANCA\nNovo array:\n");

    *v[0].nome = 'C'; // altera Pedro para Cedro
    v[0].cr = 7.0;
    free(v[0].nome);
    imprime(vt, nt);

return 0;
}