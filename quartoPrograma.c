#include <stdio.h>
//Código com finalidade de somar as informações presentes nos códigos 2 e 3
int main (){
    int minha_idade=21;
    int ano_nascimento=2002;
    int dia_nascimento=10;
    int mes_nascimento=02;
    int dia_aniversario_namoro=14;
    int somaTudo;

    somaTudo = minha_idade + ano_nascimento + dia_nascimento + mes_nascimento + dia_aniversario_namoro;

    printf("A soma de todos os dados e %i\n", somaTudo);



    return 0;
}
