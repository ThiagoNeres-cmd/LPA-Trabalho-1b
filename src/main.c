#include <stdio.h>
    
    float lerDistancia(void) {
    float Distancia;

    do {
        printf("\nDigite a distância em KM: ");
        scanf("%f", &Distancia);

        if (Distancia <= 0) {
            printf("Distância invalida! Digite um valor maior que zero.\n");
        }

    } while (Distancia <= 0);

    return Distancia;
}

    float lerPeso(void) {
        float Peso;

        do {
          printf("\nDigite o Peso em Kg: ");
        scanf("%f", &Peso);

        if (Peso <= 0) {
            printf("Peso invalido! Digite um valor maior que zero.\n");   
        } 
    }while (Peso <= 0);
        
        return Peso;   
}

    int lerModalidadeEntrega(void){
        int ModalidadeEntrega;

        printf("=== MODALIDADES ===\n");
        printf("1 - Economica\n");
        printf("2 - Expressa\n");
         printf("3 - Prioritaria\n");

        do
        {
            printf("Escolha uma Modalidade: ");
            scanf("%d", &ModalidadeEntrega);

            if (ModalidadeEntrega < 1 || ModalidadeEntrega > 3){
                printf("Número Inválido! Escolha outro número\n");
            }
            
        } while (ModalidadeEntrega < 1 || ModalidadeEntrega > 3);
        
        return ModalidadeEntrega;
}

int main(void){
    int  ModalidadeEntrega, Protecao, TentativasEntregas;
    float Distancia, Peso;

    printf("=== SIMULADOR DE ENTREGAS ===\n");

    Distancia = lerDistancia();
    Peso = lerPeso();
    ModalidadeEntrega = lerModalidadeEntrega();



    return 0;
}