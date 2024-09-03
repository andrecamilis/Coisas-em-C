#include <stdio.h>

// pode fazer a declarção antes do metodo main ou dentro do metodo main
/*
struct Data{
int dia;
int mes;
int ano;
};
struct Conta{
int num_conta;
char tipo_conta;
char nome[80];
float saldo;
struct Data dataAbertura;
struct Data ultPagamento;

} pessoa1,pessoa2;

void main(void) {

  struct Conta pessoa3;
  // dia atual 20/08/2024

  dataAbertura.dia = 20;
  dataAbertura.mes = 8;
  dataAbertura.ano = 2024;

  pessoa3.num_conta = 1234;
  pessoa3.tipo_conta = "c";
  strcpy(pessoa3.nome, "João");
  pessoa3.saldo = 100.00;
  pessoa3.dataAbertura.dia = 18;
  pessoa3.dataAbertura.mes = 8;
  pessoa3.dataAbertura.ano = 2023;
  pessoa3.ultPagamento.dia = 20;
  pessoa3.ultPagamento.mes = 2;
  pessoa3.ultPagamento.ano = 2022;
  
  imprimir(pessoa3);
  
}
void imprimir(struct Conta p){
printf("\n============== Pessoa ==============");
printf("\nNumero da conta: %d",p.num_conta);
printf("\nTipo da conta: %c",p.tipo_conta);
printf("\nNome: %s",p.nome);
printf("\n Saldo: %.2f",p.saldo);

printf("\n=====================================");
}

void ImprimirData(struct Data d, char rotulo[20]){  if(d.mes < 10)
      printf("%s: %d/0%d/%d",rotulo,d.dia,d.mes,d.ano);
  else
    printf("%s: %d/%d/%d",rotulo,d.dia,d.mes,d.ano);
}
*/