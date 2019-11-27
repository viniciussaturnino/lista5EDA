#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
  int *vetor;
  int topo;
}Pilha;

int criaPilha(Pilha *p, int n){
  p->topo = -1;
  p->vetor = malloc(n*sizeof(int));
}

int pilhaCheia(Pilha *p, int n){
  return p->topo==n;
}

int pilhaVazia(Pilha *p){
  return !p->topo;
}

void empilha(Pilha *p, int y, int n){
  if(pilhaCheia(p, n)==0){
    p->vetor[p->topo++] = y;
  }
}

int desempilha(Pilha *p){
  if(pilhaVazia(p)==0){
    printf("%d ",p->vetor[p->topo]);
    return p->vetor[--p->topo];
  }
  else
    return 0;
}

void enfileira(Pilha *p){
  int x;
  x = desempilha(p);
  p->topo++;
  for(int i=p->topo;i>0;i--){
    p->vetor[i] = p->vetor[i-1];
  }
  p->vetor[0] = x;
}

int main(){
  int n;
  Pilha *p;
  scanf("%d",&n);
  criaPilha(p,n);
  for(int i=1; i<=n; i++){
    empilha(p,i,n);
  }
  for(int i=0; i<n-1; i++){
    desempilha(p);
    enfileira(p);
  }
  printf("\n");

  return 0;
}
