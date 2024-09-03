#include <stdio.h>

#include <string.h>

int fat(int n); // avisando o void main void sobre a existencia da função fat

void main(void) {

  int num;
  printf("Digite o numero para o calculo fatorial ");
  scanf("%d",&num);

  printf("O valor do fatorial de %d é = %d", num,fat(num));

}



int fat(int n){
if(n == 0) return 1;
  if(n > 0) return n*fat(n-1);
  

  
  }


int fatNR (int n){
  
for(int i = 1; i< n; i++ ){
  n *=i;
}
  return n;
}

