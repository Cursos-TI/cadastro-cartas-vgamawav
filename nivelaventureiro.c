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
float dens;
float pibp;

//CARTA 2//

char estado2;
char codigo2 [3];
char cidade2 [20];
int populacao2;
float area2;
float PIB2;
int turismo2;
float dens2;
float pibp2;

//Variáveis novas: PIB per capita, Densidade Populacional//

// pibp = PIB / populacao * 1000000;
// dens = area / populacao;
// pibp2 = PIB2 / populacao2 * 1000000;
// dens2 = area2 / populacao2; <---- TAVA TUDO AO CONTRARIO KKKKKK (CORRIGIDO)


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

// Variáveis Novas: PIB PER CAPITA E DENSIDADE POPULACIONAL 

pibp = (PIB * 1000000000.0f) / populacao;
dens = populacao / area;

//ENTRADA -- CARTA 1 //

printf ("\n--- CARTA 1 ---\n");

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

// Variáveis Novas: PIB PER CAPITA E DENSIDADE POPULACIONAL CARTA 2

pibp2 = (PIB2 * 1000000000.0f) / populacao2;
dens2 = populacao2 / area2;


// SAIDA .. AMBAS AS CARTAS. -- 
// **com o adicional das variaveis (pibp, pibp2, dens e dens2 -- referentes a pib per capita e densidade demografica.)

printf ("Aqui está: \n\n ---CARTA 1--- \n ESTADO: %c\n CÓDIGO DA CARTA: %s\n CIDADE: %s\n POPULAÇÃO: %d \n ÁREA: %.2f KM² \n PIB: R$%f Bilhões de Reais \n PONTOS TURÍSTICOS: %d\nPIB per capita: %.2f\n Densidade Populacional: %.2f\n", estado, codigo, cidade, populacao, area, PIB, turismo, pibp, dens );   

printf ("Aqui está: \n\n ---CARTA 2--- \n ESTADO: %c\n CÓDIGO DA CARTA: %s\n CIDADE: %s\n POPULAÇÃO: %d \n ÁREA: %.2f KM² \n PIB: R$%f Bilhões de Reais \n PONTOS TURÍSTICOS: %d\nPIB per capita: %.2f\n Densidade Populacional: %.2f\n", estado2, codigo2, cidade2, populacao2, area2, PIB2, turismo2, pibp2, dens2 );   



return 0;
}
