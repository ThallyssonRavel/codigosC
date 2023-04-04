#include <stdio.h>

int main (){

    //Realizar algumas operações e apresentar na tela do usuário.

    //Variaveis para o calculo da area do retangulo.
    int base;
    int altura;
    int area;

    //Variaveis para o calculo de desconto de algum produto.
    float preco_produto;
    float porcentagem_de_desconto;
    float valor_do_desconto;
    float calculo_ja_com_desconto;

    //Variaveis para calcular a soma das idades dos integrantes de uma familia.
    int idadeMinha;
    int idadeIrmao;
    int idadeIrma;
    int somaIdades;

    //Solicitação, leitura, calculo e apresentação do objetivo (Calcular a area de um retangulo).

    printf("Digite o valor da base:");
    scanf("%i", &base);
    printf("Digite o valor da altura:");
    scanf("%i", &altura);

    area = base*altura;
    printf("A area do retangulo e = %i\n", area);

    //Solicitação, leitura, calculo e apresentação do objetivo (Calcular valor de produto ja com desconto).

    printf("Digite o preco do produto:");
    scanf("%f", &preco_produto);
    printf("Digite quantos porcento tera de desconto:");
    scanf("%f", &porcentagem_de_desconto);

    valor_do_desconto = (preco_produto * porcentagem_de_desconto)/100;
    calculo_ja_com_desconto = preco_produto - valor_do_desconto;

    printf("O valor ja com desconto e = %g\n", calculo_ja_com_desconto);

    //Solicitação, leitura, calculo e apresentação do objetivo (Calcular a soma das idades dos integrantes de uma familia).

    printf("Digite a sua idade:");
    scanf("%i", &idadeMinha);
    printf("Digite a idade do seu irmao:");
    scanf("%i", &idadeIrmao);
    printf("Digite a idade da sua irma:");
    scanf("%i", &idadeIrma);

    somaIdades = idadeMinha + idadeIrmao + idadeIrma;
    printf("A soma das idades e = %i", somaIdades);


    return 0;
}
