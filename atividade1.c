#include<stdio.h>
#include<stdbool.h>

void inserir(int vet[], int *tamanho, int valor);
void Bubble_Sorte(int vet[], int *tamanho);
void verificar(int vet[],int n);



int main(){
    int tamanho=10;
    //int vet[]={5,4,9,7,10,2,1,8,6,3};
    int vet[]={1,2,3,4,5,6,7,8,9,10};
    
    int valor;
    scanf("%d", &valor);
    
    inserir(vet, &tamanho, valor);
    
    return 0;
}

void inserir(int vet[], int *tamanho, int valor){
    (*tamanho)++;
    int i, vetNovo[*tamanho];
    vetNovo[(*tamanho)-1]=valor;
    
    for(i=0; i<(*tamanho)-1; i++){
        vetNovo[i]=vet[i];
    }
    Bubble_Sorte(vetNovo, tamanho);
}

void Bubble_Sorte(int vet[], int *tamanho){
    int i, j, aux;
    for(j=0; j<(*tamanho); j++){
        for(i=1; i<(*tamanho); i++){
            if(vet[i]<vet[i-1]){
                aux=vet[i];
                vet[i]=vet[i-1];
                vet[i-1]=aux;
            }
        }
    }
}


void verificar(int vet[],int n){
    bool ordenado=false;
    for(int i=1; i<n; i++){
        if(vet[i]<vet[i-1]){
            ordenado=true;
            break;
        }
    }
}