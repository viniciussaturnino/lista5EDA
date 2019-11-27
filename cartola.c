#include<stdio.h>
#include<stdlib.h>

typedef struct Pilha{
  int *vetor;
  int topo;
}Pilha;

int criaPilha(Pilha *p,int n){
  p->topo = -1;
  p->vetor = malloc(n*sizeof(int));
}

void empilha(Pilha *p, int e){
  p->topo++;
  p->vetor[p->topo] = e;
}

int desempilha(Pilha *p){
  p->topo--;
  return p->vetor[p->topo+1];
}

void enfileira(Pilha *p){
  int aux = p->vetor[p->topo];
  for(int i=p->topo;i>0;i--){
    p->vetor[i] = p->vetor[i-1];
  }
  p->vetor[0] = aux;
}

int main(){
  int n,i;
  Pilha *p;
  scanf("%d",&n);
  criaPilha(p,n);
  for(i=n;i>0;i--)
    empilha(p,i);
  printf("Cartas descartadas: ");
  for(i=0;i<n-2;i++){
    printf("%d, ",desempilha(p));
    enfileira(p);
  }
  printf("%d",desempilha(p));
  printf("\nCarta restante: %d\n",desempilha(p));

  return 0;
}
