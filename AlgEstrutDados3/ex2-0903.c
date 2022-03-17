#include <stdio.h>
#include <stdlib.h>

int *uniao (int *x1, int *x2, int n1, int n2, int *qtd);

int main(){ 
    int i, x1[]={1,3,5,6,7}, x2[]={1,3,4,6,8}, *x3, tam1, tam2, tam3;

    tam1 = 5;
    tam2 = 5;
    tam3 = tam1 + tam2;

    if (x1==NULL){ 
        printf("\n\nImpossível alocar memória.\n\n");
        return 1;
    }
  

    if (x2==NULL){ 
        printf("\n\nImpossível alocar memória.\n\n");
        return 1;
    }

    printf("\n\nVetor 1: ");
    for(i=0; i<tam1; i++){ 
        printf("\t%d", *(x1+i));
    }
    printf("\n\n\n\n");  

    printf("Vetor 2: ");
    for(i=0; i<tam2; i++){ 
        printf("\t%d", *(x2+i));
    }
 
    x3 = (int*)malloc(tam3*sizeof(int));

    x3 = uniao(x1,x2,tam1,tam2,x3);

    printf("\n\nVetor união: ");
    for(i=0; i<tam1; i++){ 
        printf("\t%d", *(x3+i));
    }
    printf("\n\n");
} 

int *uniao (int *x1, int *x2, int n1, int n2, int *qtd){ 
    int i=0, j=0, *x3;

    x3 = (int*)malloc((n1+n2) * sizeof(int));
   
    if (x3 == NULL){    
        printf("\n\nImpossível alocar memória.\n\n");
        return 0;
    }
   
 
    for(i=0; i<(n1+n2); i++){ 
        if(*(x1+i)== *(x2+i)){ 
          *(x3+j) = *(x1+i);
        j++;
    }
    else if(*(x1+i)<*(x2+i))
    {    *(x3+j) = *(x1+i);
         *(x3+j+1) = *(x2+i);
          j=j+2;
    }
    else if (*(x1+i)>*(x2+i))
    { *(x3+j) = *(x1+i);
           *(x3+j+1) = *(x2+i);
           j=j+2;
    }


  }

return (x3);
}