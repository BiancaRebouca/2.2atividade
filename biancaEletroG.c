
#include <stdio.h>
#include <math.h>
int main() {
    //armazenamento de dados
    float comprimento;
    float largura;
    float precodometroquadrado;
    float soma;
    float soma1;

    //saída e entrada
    printf("INFORME O COMPRIMENTO DA SALA : ");
    scanf("%f",&comprimento);
    
    printf("INFORME A LARGURA DA SALA : ");
    scanf("%f",&largura);

    printf("INFORME O PRECO DO METRO QUADRADO : ");
    scanf("%f",&precodometroquadrado);

    //ação
    soma = comprimento*largura;
    soma1 = soma*precodometroquadrado;

    //saída
    printf("O PRECO DO METRO QUADRADO DE CARPETE E DE %.2f",soma1);
}


 












    