#include <stdio.h>
#include <math.h>

float aproximacao(float x, float x0,float e){
    float raiz; //variavel raiz da funcao aproximacao
    if (pow(x0,2)- x <= e ) { //estrutura de decissao
        raiz = (x0 * x0 + x) / (2 * x0); //calculo para encontrar a aproximação da raiz
    }
    return raiz; //retorna o valor aproximado da raiz
}

int main (){
    float x = 13, x0 = 3.5, e = 0.001, raiz; //variaveis com os valores para passar como paramatro
    raiz = aproximacao(x, x0, e); //recebe o retorno e atribui a variavel raiz da funcao main
    printf("resultado da aproximacao: %.3f\n",raiz); //imprime o resultado da funcao aproximacao
    return 0;
}