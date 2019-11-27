#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindro(const char *str, int n){
	for (int i=0, j=n-1; i<j; i++, j--)
		if (str[i] != str[j])
			return 0;
	return 1;
}

int main(){
  int n;
  scanf("%d",&n);
	char *palavra;
  palavra = malloc(n*sizeof(char));
	scanf("%s",palavra);
	printf("%d\n", isPalindro(palavra,n));
	return 0;
}
