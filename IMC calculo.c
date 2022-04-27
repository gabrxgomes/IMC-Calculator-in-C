#include <stdio.h>

void IMC (int, float);
int main(void)
{
  int p;
  float a;
       printf("Digite seu Peso: ");
       scanf("%d", &p);
       printf("Digite sua Altura: ");
       scanf("%f", &a);
       IMC(p, a);
}

void IMC (int peso, float altura){
    float x = peso/ (altura * altura);
    printf("IMC = %f\n", x);
    printf("\nClassificacao: ");
    if(x < 18.5)
    {
        printf("Peso Baixo");
    }
    else if (x >= 18.5 && x <=24.9)
    {
        printf("Peso Normal");
    }
    else if (x >= 25 && x <=29.9)
    {
        printf("Sobrepeso");
    }
    else if (x >= 30 && x <= 34.9)
    {
        printf("Obesidade Grau 1");
    }
    else if (x >= 35 && x <= 39.9)
    {
        printf("Obesidade Severa Grau 2");
    }
    else if (x >= 40)
    {
        printf("Obesidade Mórbida Grau 3");
    }
    
}