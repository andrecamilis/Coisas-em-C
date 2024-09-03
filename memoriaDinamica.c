#include <stdio.h>
void main(void){
int *x;
  x = (int * )malloc(10* sizeof(int)); // alocando 10 posições
// caso esteja dando um numero acima do espaço alocado caso tenha outro programa que irá ser sobrescrito
  x[0] = 10;
  x[1] = 20;
  x[2] = 15;
  x[3] = 29;
  x[4] = 30;
  x[5] = 12;
  // alocação da memoria dinâmica 
  // caso haja um numero da memoria seja maior 
  

  int i;
  for(i = 0; i < 10; i++){
    printf("%d, ", x[i]);
  }
  free(x);
}