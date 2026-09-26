
# Trabalho B1 - Lógica de Programação e Algoritmos

## Link do projeto no GitHub:

https://github.com/ThiagoNeres-cmd/LPA-Trabalho-1b

## Descrição

Este trabalho consiste na criação de um Simulador de Entregas em linguagem C. O programa recebe informações como distância, peso, modalidade da entrega, proteção e quantidade de tentativas adicionais. Depois de receber esses dados, ele verifica se os valores são válidos e faz os cálculos seguindo as regras definidas no roteiro do trabalho.

O programa permite realizar várias entregas durante a mesma execução. A cada entrega ele mostra o valor final e pergunta se o usuário deseja continuar. Quando o usuário decide encerrar, é mostrado um resumo com a quantidade de entregas realizadas, o valor total, a média dos valores, a quantidade de entregas de cada modalidade e também o maior e o menor valor encontrados.

## Funcionalidades

O programa faz a leitura e validação da distância e do peso, permite escolher entre as modalidades Econômica, Expressa e Prioritária, permite escolher se deseja adicionar proteção e também recebe a quantidade de tentativas adicionais de entrega.

Com esses dados, o programa calcula o valor-base de acordo com a distância, o subtotal inicial, o adicional de peso, o adicional da modalidade, o valor da proteção e o valor das tentativas adicionais. Depois, todos esses valores são utilizados para chegar ao valor final da entrega.

Também é possível processar várias entregas durante a mesma execução. Enquanto o programa está sendo usado, ele vai atualizando a quantidade total de entregas, o valor acumulado, a quantidade de entregas de cada modalidade e o maior e o menor valor. No final, essas informações são utilizadas para mostrar o resumo da sessão.

## Organização da solução

O código foi dividido em funções para deixar cada parte com uma responsabilidade e evitar que tudo ficasse dentro da função `main`.

As funções `lerDistancia`, `lerPeso`, `lerModalidadeEntrega`, `lerProtecao`, `lerTentativasEntregas` e `lerContinuar` são responsáveis por receber as informações digitadas e verificar se os valores são válidos.

Já as funções `CalcularValorBase`, `CalcularSubTotalInicial`, `CalcularAdicionalPeso`, `CalcularAdicionalModalidade`, `CalcularAdicionalProtecao` e `CalcularAdicionalTentativas` são responsáveis pelos cálculos usados para encontrar o valor da entrega.

A função `main` organiza o funcionamento do programa, chama as outras funções, calcula o valor final, controla a repetição das entregas, atualiza os contadores e acumuladores e mostra o resumo quando o usuário encerra o programa.

## Compilação

O programa foi desenvolvido em linguagem C e compilado utilizando GCC/MinGW. Para compilar o arquivo pelo terminal foi utilizado o comando:

`gcc src/main.c -o simulador`

## Execução

Depois da compilação, no Windows, o programa pode ser executado pelo terminal utilizando:

`.\simulador.exe`

## Uso de Inteligência Artificial

Durante o desenvolvimento do trabalho utilizei o ChatGPT como ferramenta de apoio. Usei principalmente para entender melhor algumas partes do roteiro, tirar dúvidas sobre linguagem C e receber orientações quando eu não sabia como continuar alguma parte do programa.

Entre as dúvidas que tive estavam como separar o código em funções, como validar os valores usando `do-while`, como fazer os cálculos dos adicionais, como utilizar contadores e acumuladores e como fazer o controle do maior e do menor valor das entregas.

Também utilizei o ChatGPT para revisar o código e conferir se as regras que eu tinha implementado estavam de acordo com o roteiro e com as apostilas da matéria. As respostas foram usadas como apoio durante o desenvolvimento e o código foi sendo feito por etapas. Conforme eu testava o programa, também fui corrigindo erros e alterando algumas partes até chegar ao resultado final.

## Fontes consultadas

Foram utilizadas as apostilas disponibilzadas no AVA.
 Aula 02 - Fundamentos de Algoritmos e Programação, Aula 03 - Estruturas de Decisão e Repetição, Aula 04 - Procedimentos, Funções e Modularização e Aula 05 - Parâmetros e Integração da Programação Estruturada.