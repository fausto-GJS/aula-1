/*

----------------------------
*jogo de par ou impar jogando contra o PC (PC roubando o jogo)*
-----------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int numero, computador,soma;
printf("Digite 0 para PAR e 1 para IMPAR\n");
scanf("%d",&numero);
srand(time(NULL));
computador = rand()%10;
soma = numero+computador;
if(soma%2 == 0){
soma++;
if(soma%2 == 0){
printf("Eu ganhei = %d ",soma);
}else{
printf("O computador ganhou = %d",soma);
}
}
}


----------------------------
*jogo de par ou impar jogando contra o PC*
-----------------------------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int numero, computador,soma;
printf("Digite 0 para PAR e 1 para IMPAR\n");
scanf("%d",&numero);
srand(time(NULL));
computador = rand()%10;
soma = numero+computador;
if(soma%2 == 0){
printf("Eu ganhei = %d ",soma);
}else{
printf("O computador ganhou = %d",soma);
}
}


----------------------------
*jogo de par ou impar individual*
-----------------------------
#include <stdio.h>

int main(void) {
int numero;
printf("Digite 0 para PAR e 1 para IMPAR\n");
scanf("%d",&numero);
if(numero % 2 == 0)
printf("PAR\n");
else
printf("IMPAR\n");
}


-----------------------------
*comando Hello World*
-----------------------------
#include <stdio.h>

int main(void) {
  printf("Olá mundo\n");
  return 0;
}


--------------------------------
*comandos principais*
--------------------------------
Pseudocodigo | C
inteiro      = int(%d)
real         = floar(%f) ou double(%lf)
caracter     = char (%c)
cadeia       = char[10] (%s)
******************************
escreva("ok") = printf("OK");
leia(dia)     = scanF("%d,&dia");
******************************
Idade:25 anos.
escreva("Idade: ",Idade," anos\n");
printf("Idade: %d anos\n", idade);
******************************
leia(idade, peso)
scanf("%d%f", &idade, &peso);
printf("Idade = %d e o Peso = %f \n", idade,peso);
*/