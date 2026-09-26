#include <stdio.h>

float lerDistancia(void){
    float Distancia;

    do {
        printf("\nDigite a distancia em KM: ");
        scanf("%f", &Distancia);

        if (Distancia <= 0) {
            printf("Distancia invalida! Digite um valor maior que zero.\n");
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

    } while (Peso <= 0);

    return Peso;
}

int lerModalidadeEntrega(void) {
    int ModalidadeEntrega;

    printf("\n=== MODALIDADES ===\n");
    printf("1 - Economica\n");
    printf("2 - Expressa\n");
    printf("3 - Prioritaria\n");

    do {
        printf("Escolha uma Modalidade: ");
        scanf("%d", &ModalidadeEntrega);

        if (ModalidadeEntrega < 1 || ModalidadeEntrega > 3) {
            printf("Numero invalido! Escolha outro numero.\n");
        }

    } while (ModalidadeEntrega < 1 || ModalidadeEntrega > 3);

    return ModalidadeEntrega;
}

int lerProtecao(void) {
    int Protecao;

    printf("\n=== ESCOLHA A PROTECAO ===\n");
    printf("1 - SIM\n");
    printf("0 - NAO\n");

    do {
        printf("Escolha a protecao: ");
        scanf("%d", &Protecao);

        if (Protecao != 1 && Protecao != 0) {
            printf("Escolha uma opcao valida!\n");
        }

    } while (Protecao != 0 && Protecao != 1);

    return Protecao;
}

int lerTentativasEntregas(void) {
    int TentativasEntregas;

    printf("\n=== TENTATIVAS DE ENTREGAS ===\n");

    do {
        printf("Digite a quantidade de tentativas adicionais: ");
        scanf("%d", &TentativasEntregas);

        if (TentativasEntregas < 0) {
            printf("Nao e possivel aceitar esse valor!\n");
        }

    } while (TentativasEntregas < 0);

    return TentativasEntregas;
}

// CALCULOS

float CalcularValorBase(float Distancia) {
    float ValorBase;

    if (Distancia <= 5) {
        ValorBase = 8.00;
    } else if (Distancia <= 15) {
        ValorBase = 12.00;
    } else if (Distancia <= 30) {
        ValorBase = 18.00;
    } else {
        ValorBase = 25.00;
    }

    return ValorBase;
}

float CalcularSubTotalInicial(float Distancia) {
    float ValorBase, SubTotalInicial;
    const float ValorKM = 1.20;

    ValorBase = CalcularValorBase(Distancia);

    SubTotalInicial = ValorBase + (Distancia * ValorKM);

    return SubTotalInicial;
}

float CalcularAdicionalPeso(float Peso, float SubTotalInicial) {
    float AdicionalPeso;

    if (Peso <= 2) {
        AdicionalPeso = 0;
    } else if (Peso <= 5) {
        AdicionalPeso = SubTotalInicial * 0.05;
    } else if (Peso <= 10) {
        AdicionalPeso = SubTotalInicial * 0.10;
    } else {
        AdicionalPeso = SubTotalInicial * 0.20;
    }

    return AdicionalPeso;
}

float CalcularAdicionalModalidade(int ModalidadeEntrega, float SubTotalInicial) {
    float ValorAdicionalModalidade;

    if (ModalidadeEntrega == 1) {
        ValorAdicionalModalidade = 0;
    } else if (ModalidadeEntrega == 2) {
        ValorAdicionalModalidade = SubTotalInicial * 0.15;
    } else {
        ValorAdicionalModalidade = SubTotalInicial * 0.30;
    }

    return ValorAdicionalModalidade;
}

float CalcularAdicionalProtecao(int Protecao) {
    float AdicionalProtecao;

    if (Protecao == 0) {
        AdicionalProtecao = 0.00;
    } else {
        AdicionalProtecao = 7.50;
    }

    return AdicionalProtecao;
}

float CalcularAdicionalTentativas(int TentativasEntregas) {
    float AdicionalTentativas;

    AdicionalTentativas = TentativasEntregas * 4.00;

    return AdicionalTentativas;
}

int main(void) {
    int ModalidadeEntrega, Protecao, TentativasEntregas;
    float Distancia, Peso;
    float SubTotalInicial;
    float ValorAdicionalPeso;
    float ValorAdicionalModalidade;
    float ValorAdicionalProtecao;
    float ValorAdicionalTentativas;
    float ValorFinal;

    printf("=== SIMULADOR DE ENTREGAS ===\n");

    Distancia = lerDistancia();
    Peso = lerPeso();
    ModalidadeEntrega = lerModalidadeEntrega();
    Protecao = lerProtecao();
    TentativasEntregas = lerTentativasEntregas();

    SubTotalInicial = CalcularSubTotalInicial(Distancia);

    ValorAdicionalPeso = CalcularAdicionalPeso(Peso, SubTotalInicial);

    ValorAdicionalModalidade = CalcularAdicionalModalidade(ModalidadeEntrega, SubTotalInicial);

    ValorAdicionalProtecao = CalcularAdicionalProtecao(Protecao);

    ValorAdicionalTentativas = CalcularAdicionalTentativas(TentativasEntregas);

    ValorFinal =
        SubTotalInicial
        + ValorAdicionalPeso
        + ValorAdicionalModalidade
        + ValorAdicionalProtecao
        + ValorAdicionalTentativas;

    printf("\nValor final da entrega: R$ %.2f\n", ValorFinal);

    return 0;
}