#include <stdio.h>
#include <malloc.h>
#include <string.h>

//matriz bi-dimenssional


void main(void) {

  char *nome;

  lendoNome(&nome);

}

lendoNome(char **n){  
  char nomeAux[200];
  printf("Digite o nome: ");
  gets(nomeAux);
  *n =(char * ) malloc(sizeof(nomeAux));
  
}