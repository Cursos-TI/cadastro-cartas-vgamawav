
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Área para entrada de dados

  // Área para exibição dos dados da cidade

#include <stdio.h>

//SUPER TRUNFO//

int main (){

//-------------VARIÁVEIS-------------//

//CARTA 1//

char estado;
char codigo [3];
char cidade [20];
int populacao;
float area;
float PIB;
int turismo;

//CARTA 2//

char estado2;
char codigo2 [3];
char cidade2 [20];
int populacao2;
float area2;
float PIB2;
int turismo2;


// ---------------- COMANDOS ---------------------//

//ENTRADA -- CARTA 1 //

printf ("\n--- CARTA 1 ---\n");

printf ("DIGITE UMA LETRA QUE REPRESENTE SEU ESTADO:  \n");
scanf (" %c", &estado);

printf ("DIGITE UM CÓDIGO PARA SEU ESTADO:  \n");
scanf ("%s", codigo);

printf ("DIGITE O NOME DA CIDADE:  \n");
scanf ("%s", cidade);

printf ("QUAL É A POPULAÇÃO DA CIDADE?  \n");
scanf ("%d", &populacao);

printf ("QUAL É A ÁREA DA CIDADE? (EM KM²) \n");
scanf ("%f", &area);

printf ("QUAL É O PIB DA CIDADE? (Em Bilhões) \n");
scanf ("%f", &PIB);

printf ("QUANTOS PONTOS TURÍSTICOS TEM NA CIDADE?  \n");
scanf ("%d", &turismo);


//ENTRADA -- CARTA 2//

printf ("\n--- CARTA 2 ---\n");

printf ("DIGITE UMA LETRA QUE REPRESENTE SEU ESTADO:  \n");
scanf (" %c", &estado2);

printf ("DIGITE UM CÓDIGO PARA SEU ESTADO:  \n");
scanf ("%s", codigo2);

printf ("DIGITE O NOME DA CIDADE:  \n");
scanf ("%s", cidade2);

printf ("QUAL É A POPULAÇÃO DA CIDADE?  \n");
scanf ("%d", &populacao2);

printf ("QUAL É A ÁREA DA CIDADE? (EM KM²) \n");
scanf ("%f", &area2);

printf ("QUAL É O PIB DA CIDADE? (Em Bilhões) \n");
scanf ("%f", &PIB2);

printf ("QUANTOS PONTOS TURÍSTICOS TEM NA CIDADE?  \n");
scanf ("%d", &turismo2);


// SAIDA -- CARTA 1

printf ("Aqui está: \n\n ---CARTA 1--- \n ESTADO: %c\n CÓDIGO DA CARTA: %s\n CIDADE: %s\n POPULAÇÃO: %d \n ÁREA: %.2f KM² \n PIB: R$%f Bilhões de Reais \n PONTOS TURÍSTICOS: %d\n",
estado, codigo, cidade, populacao, area, PIB, turismo);


// SAIDA -- CARTA 2

printf ("Aqui está: \n\n ---CARTA 2--- \n ESTADO: %c\n CÓDIGO DA CARTA: %s\n CIDADE: %s\n POPULAÇÃO: %d \n ÁREA: %.2f KM² \n PIB: R$%f Bilhões de Reais \n PONTOS TURÍSTICOS: %d\n",
estado2, codigo2, cidade2, populacao2, area2, PIB2, turismo2);


return 0;
}

// obs.: eu havia codado no VSCODE antes de ver o video de como upar
// no github (kkkkkkkk) entao apaguei as linhas de comando que tinham
// e colei meu codigo do vscode.