#include <stdio.h>

typedef struct rua{
  int id;
  int value;
  int id_prox;
}rua;

int main(){
  int n, id, value, id_prox;
  scanf("%d",&n);
  int aux[n];
  for(int i=0; i<n; i++){
    scanf("%d%d%d",&id,&value,&id_prox);
    aux[i] = value;
  }
}
