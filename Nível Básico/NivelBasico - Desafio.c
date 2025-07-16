#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
      //carta 1
        //variaveis
        char estado;
        char codigo[3]; //o código terá no máximo 2 número (3 com o valor nulo)
        char nome_cidade[50]; //limite do nome da cidade = 50
        int populacao;
        float area;
        float PIB;
        int turista;
      //carta 2
        //variavel
        char estado2;
        char codigo2[4]; //idem
        char nome_cidade2[50]; //idem
        int populacao2;
        float area2;
        float PIB2;
        int turista2;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
      //carta 1
        //programação
printf("Digite a primeira letra, de A-H, do Estado da sua primeira carta\n");
scanf(" %c", &estado);

printf("Digite um código, de 01-04, para o Estado escolhido\n");
scanf("%3s", codigo);

printf("Digite o nome da Cidade do Estado escolhido que você quer\n");
scanf("%49s", nome_cidade);

printf("Escreva a quantidade de população, em milhões, da Cidade escolhida\n");
scanf("%d", &populacao);

printf("Digite a área total, em km², da Cidade escolhido\n");
scanf("%f", &area);

printf("Digite o PIB, em milhões, dessa Cidade\n");
scanf("%f", &PIB);

printf("Diga quantos pontos turisticos tem nessa Cidade\n");
scanf("%d", &turista);
printf("\n");
printf("\n");
printf("\n");
    
      //carta 2
        //programação
printf("Agora vamos a segunda carta.....\n");
printf("Digite a primeira letra, de A-H, do Estado da sua segunda carta\n");
scanf(" %c", &estado2);

printf("Digite um código, de 01-04, para o Estado escolhido\n");
scanf("%3s", codigo2);

printf("Digite o nome da Cidade do Estado escolhido que você quer\n");
scanf("%49s", nome_cidade2);

printf("Escreva a quantidade de população, em milhões, da Cidade escolhida\n");
scanf("%d", &populacao2);

printf("Digite a área total, em km², da Cidade escolhida\n");
scanf("%f", &area2);

printf("Digite o PIB, em milhões, dessa Cidade\n");
scanf("%f", &PIB2);

printf("Diga quantos pontos turisticos tem nessa Cidade\n");
scanf("%d", &turista2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //resultado da 1ª carta
printf("\n");
printf("\n");
printf("\n");
printf("Vamos então recaptular a sua primeira carta.......\n");
printf("O Estado escolhido foi o Estado %c\n", estado); //nome do estado
printf("Tendo como código: %c%s\n", estado, codigo); //código com a primeira letra e o número
printf("A cidade escolhida foi: %s\n", nome_cidade); //cidade
printf("com %d milhões de pessoas vivendo lá\n", populacao); //população
printf("Com uma área de %.2f km²\n", area); //área
printf("O PIB dessa Cidade é de R$%.2f\n", PIB); //PIB
printf("tendo %d pontos turísticos\n", turista); //Pontos turísticos
    
    //resultado da 2ª carta
printf("\n"); //PULANDO LINHAS PARA ORGANIZAR
printf("\n"); //PULANDO LINHAS PARA ORGANIZAR
printf("Vamos então recaptular a sua segunda carta.......\n");
printf("O Estado escolhido foi o Estado %c\n", estado2); //nome do estado
printf("Tendo como código: %c%s\n", estado2, codigo2); //código com a primeira letra e o número
printf("A cidade escolhida foi: %s\n", nome_cidade2); //cidade
printf("com %d milhões de pessoas vivendo lá\n", populacao2); //população
printf("Com uma área de %.2f km²\n", area2); //área
printf("O PIB dessa Cidade é de R$%.2f\n", PIB2); //PIB
printf("tendo %d pontos turísticos\n", turista2); //Pontos turísticos
    return 0;
}
