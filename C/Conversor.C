#include <stdio.h>
int main(void){
    //Variáveis
    float celsius, fahrenheit, milhas, kilometros, feet, metros, libras, kg;
    int opcao;

    //Interface
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=- Bem vindo ao conversor EUA! -=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
    printf("\n1- Conversor de temperatura\n2- Conversor de distancia\n3- Conversor de altura\n4- Conversor de peso");
    printf("\nSelecione a opcao desejada: ");
    scanf("%d",&opcao);

    //Escolhas
    switch(opcao){
        case 1:{
            //Entrada de dados
            printf("\nDigite a temperatura em Fahrenheit e darei em Celsius: ");
            scanf("%f",&fahrenheit);
            //Cálculo
            celsius = (fahrenheit-32)/1.8;
            //Saída de dados
            printf("A temperatura %.1f Fahrenheit equivale a %.1f Celsius.",fahrenheit,celsius);
            break;
        }
        case 2:{
            //Entrada de dados
            printf("\nDigite a distancia em milhas e darei em kilometros: ");
            scanf("%f",&milhas);
            //Cálculo
            kilometros = milhas * 1.6;
            //Saída de dados
            printf("A distancia de %.1f milhas equivale %.1f kilometros.",milhas,kilometros);
            break;            
        }
        case 3:{
            //Entrada de dados
            printf("\nDigite a altura em feet e darei em metros: ");
            scanf("%f",&feet);
            //Cálculo
            metros = feet / 3.281;
            //Saída de dados
            printf("A altura %.2f em feet equivale a %.2f metros.",feet,metros);
            break;
        }
        case 4:{
            //Entrada de dados
            printf("\nDigite o peso em libras e darei em kilogramas: ");
            scanf("%f",&libras);
            //Cálculo
            kg = libras / 2.205;
            //Saída de dados
            printf("O peso de %.2f libras equivale a %.2f kilogramas.",libras,kg);
            break;
        }
        default:{
            //Erro ao digitar outro valor
            printf("Erro!! Opcao %d nao e reconhecida. Tente novamente.",opcao);
            break;
        }
    }
}
