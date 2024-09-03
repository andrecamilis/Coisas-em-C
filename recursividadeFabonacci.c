#include <stdio.h>

#include <string.h>

int fib(int n);

void main(void) {

  int num;
  printf("Digite o numero para o calculo de Fibonacci ");
  scanf("%d",&num);

  printf("O valor de Fibonacci de %d é = %d", num,fib(num));

}

int fib(int n){

  if(n == 0) return 0;
  if(n== 1) return 1;
  if( n > 1) return fib(n - 1 ) + fib(n -2);
  
}

int fibNR(int n){

  if(n == 0) return 0;
  if(n== 1) return 1;
  if(n > 1){
    for( int i = n ; i<n; i++){
      n = n * i;
      
    }
  }

  
}
