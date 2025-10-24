#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

// Mensagem de inicio
printf("Super Trunfo Países\n");
printf("Vamos criar sua primeira carta!\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades

  int comparacao1,comparacao2; //VÁRIAVEL REFERENTE AS COMPARAÇÕES
  int resultado; //RESULTADO DAS COMPARAÇÕES
  int atributo1,atributo2;
//Carta 1
char estado1;
char cod_carta1[20];
char cidade1[20];
 int pop1, p_turistico1;
float area1, pib1, densidade1,pibperk1;

//Carta 2
char estado2;
char cod_carta2[20];
char cidade2[20];
 int pop2, p_turistico2;
float area2, pib2, densidade2,pibperk2;


  // Área para entrada de dados

  //USUARIO VAI INFORMAR AS INFORMAÇÕES DA CARTA 1
//CARTA 1
  printf("Escolha uma letra de A a H para representar um estado:\n");
  scanf("%c", &estado1);
  printf("Agora digite o nome de uma cidade:\n ");
  scanf("%s", cidade1);
  printf("Qual a população dessa cidade?\n");
  scanf("%i", &pop1);
  printf("Quantos km² tem essa cidade?\n");
  scanf("%f", &area1);
  printf("Qual o PIB dessa cidade?\n");
  scanf("%f", &pib1);
  printf("Quantos pontos turísticos tem essa cidade?\n");
  scanf("%i", &p_turistico1);

//Mensagem informativa
printf("Certo! Agora vamos para a segunda carta.\n");

  //USUARIO VAI INFORMAR AS INFORMAÇÕES DA CARTA 2
 //CARTA 2
  printf("Escolha novamente uma letra de A a H para representar um estado:\n");
  scanf(" %c", &estado2);
  printf("Agora digite o nome de uma cidade:\n ");
  scanf("%s", cidade2);
  printf("Qual a população dessa cidade?\n");
  scanf("%i", &pop2);
  printf("Quantos km² tem essa cidade?\n");
  scanf("%f", &area2);
  printf("Qual o PIB dessa cidade?\n");
  scanf("%f", &pib2);
  printf("Quantos pontos turísticos tem essa cidade?\n");
  scanf("%i", &p_turistico2);

  //Área de Operações

//CALCULO DA DENSIDADE
densidade1 = pop1 / area1;
densidade2 = pop2 / area2;
//CALCULO DO PIB PERCAPITA
pibperk1 = pib1 / pop1;
pibperk2 = pib2 / pop2;


//COMPARAÇÃO DAS CARTAS
//ESCOLHA DE UM DOS ATRIBUTOS
printf("BATALHA DE CARTAS!\n");

printf("Escolha um atributo para comparar as cartas:\n");
printf("1.População\n");
printf("2.Área\n");
printf("3.PIB\n");
printf("4.Pontos Turísticos\n");
printf("5.Densidade Demográfica\n");
printf("R: ");
scanf("%i",&atributo1);

//PRIMEIRA COMPARAÇÃO
switch (atributo1)
{
case 1: if(comparacao1 = pop1 > pop2 ? 1 : 0)
  { //CASO DE VITÓRIA DA CARTA 1
  printf("No atributo POPULAÇÃO a carta N°1 (%s) vence!\n",cidade1);
  printf("População Carta N°1 (%s): %lu /Vs/ População Carta N°2 (%s): %lu.\n",cidade1,pop1,cidade2,pop2);
  }else if (pop1 == pop2)
  { //CASO DE EMPATE
  printf("No atributo POPULAÇÃO as cartas tem os mesmos valores!\n");
  printf("População Carta N°1 (%s): %lu /Vs/ População Carta N°2 (%s): %lu.\n",cidade1,pop1,cidade2,pop2);
  }else{ //CASO DE VITÓRIA DA CARTA 2
  printf("No atributo POPULAÇÃO a carta N°2 vence!\n");
  printf("População Carta N°2 (%s): %lu /Vs/ População Carta N°1 (%s): %lu.\n",cidade2,pop2,cidade1,pop1);
  }
  break;

case 2: if(comparacao2 = area1 > area2 ? 1 : 0)
  { //CASO DE VITÓRIA DA CARTA 1
  printf("No atributo ÁREA a carta N°1 (%s) vence!\n",cidade1);  
  printf("Área Carta N°1 (%s): %.2f /Vs/ Área Carta N°2 (%s): %.2f.\n",cidade1,area1,cidade1,area2);
  }else if (area1 == area2)
  { //CASO DE EMPATE
  printf("No atributo ÁREA as cartas tem os mesmos valores!\n");
  printf("ÁREA Carta N°1 (%s): %.2f /Vs/ ÁREA Carta N°2 (%s): %.2f.\n",cidade1,area1,cidade2,area2);
  }else{ //CASO DE VITÓRIA DA CARTA 2
  printf("No atributo ÁREA a carta N°2 (%s) vence!\n",cidade2);
  printf("Área Carta N°2 (%s): %.2f /Vs/ População Carta N°1 (%s): %.2f.\n",cidade2,area2,cidade1,area1);
  }
  break;

case 3: if(comparacao1 = pib1 > pib2 ? 1 : 0)
  { //CASO DE VITÓRIA DA CARTA 1
  printf("No atributo PIB a carta N°1 (%s) vence!\n",cidade1);
  printf("PIB Carta N°1 (%s): %.2f /Vs/ PIB Carta N°2 (%s): %.2f.\n",cidade1,pib1,cidade2,pib2);
  }else if (pib1 == pib2)
  { //CASO DE EMPATE
  printf("No atributo PIB as cartas tem os mesmos valores!\n");
  printf("PIB Carta N°1 (%s): %.2f /Vs/ PIB Carta N°2 (%s): %.2f.\n",cidade1,pib1,cidade2,pib2);
  }else{ //CASO DE VITÓRIA DA CARTA 2
  printf("No atributo PIB a carta N°2 (%s) vence!\n",cidade2);
  printf("PIB Carta N°2 (%s): %.2f /Vs/ PIB Carta N°1 (%s): %.2f.\n",cidade2,pib2,cidade1,pib1);
  }
  break;

case 4: if(comparacao1 = p_turistico1 > p_turistico2 ? 1 : 0)
  { //CASO DE VITÓRIA CARTA 1
  printf("No atributo PONTOS TURÍSTICOS a carta N°1 (%s) vence!\n",cidade1);
  printf("PONTOS TURÍSTICOS Carta N°1 (%s): %i /Vs/ PONTOS TURÍSTICOS Carta N°2 (%s): %i.\n",cidade1,p_turistico1,cidade2,p_turistico2);
  }else if (p_turistico1 == p_turistico2)
  { //CASO DE EMPATE
  printf("No atributo PONTOS TURÍSTICOS as cartas tem os mesmos valores!\n");
  printf("PONTOS TURÍSTICOS Carta N°1 (%s): %i /Vs/ PONTOS TURÍSTICOS Carta N°2 (%s): %i.\n",cidade1,p_turistico1,cidade2,p_turistico2);
  }else{ //CASO DE VITÓRIA CARTA 2
  printf("No atributo PONTOS TURÍSTICOS a carta N°2 (%s) vence!\n",cidade2);
  printf("PONTOS TURÍSTICOS Carta N°2 (%s): %i /Vs/ PONTOS TURÍSTICOS Carta N°1 (%s): %i.\n",cidade1,p_turistico2,cidade2,p_turistico1);
  }
  break;

case 5: if(comparacao1 = densidade1 > densidade2 ? 1 : 0)
  { //CASO DE VITÓRIA CARTA 1
  printf("No atributo DENSIDADE DEMOGRÁFICA a carta N°1 (%s) vence!\n",cidade1);
  printf("DENSIDADE DEMOGRÁFICA Carta N°1 (%s): %.2f /Vs/ DENSIDADE DEMOGRÁFICA Carta N°2 (%s): %.2f.\n",cidade1,densidade1,cidade2,densidade2);
  }else if (densidade1 == densidade2)
  { //CASO DE EMPATE
  printf("No atributo DENSIDADE DEMOGRÁFICA as cartas tem os mesmos valores!\n");
  printf("DENSIDADE DEMOGRÁFICA Carta N°1 (%s): %.2f /Vs/ DENSIDADE DEMOGRÁFICA Carta N°2 (%s): %.2f.\n",cidade1,densidade1,cidade2,densidade2);
  }else{ //CASO DE VITÓRIA CARTA 2
  printf("No atributo DENSIDADE DEMOGRÁFICA a carta N°2 (%s) vence!\n",cidade2);
  printf("DENSIDADE DEMOGRÁFICA Carta N°2 (%s): %.2f /Vs/ DENSIDADE DEMOGRÁFICA Carta N°1: %.2f.\n",cidade2,densidade2,densidade1);
  }
  break;

  default:
  printf("Alternativa inválida\n");
  break;
}

//ESCOLHA DE OUTRO ATRIBUTO
printf("SEGUNDO ROUND!\n");
printf("Escolha mais um atributo:\n");
printf("1.População\n");
printf("2.Área\n");
printf("3.PIB\n");
printf("4.Pontos Turísticos\n");
printf("5.Densidade Demográfica\n");
printf("R: ");
scanf("%i",&atributo2);

//VEREFICAR CASO O ATRIBUTO SEJA O MESMO
if (atributo1 == atributo2)
{
  printf("Você escolheu o mesmo atributo!\n");
    return 0;

}

//SEGUNDA COMPARAÇÃO
switch (atributo2)
{
case 1: if(comparacao1 = pop1 > pop2 ? 1 : 0)
  { //CASO DE VITÓRIA DA CARTA 1
  printf("No atributo POPULAÇÃO a carta N°1 (%s) vence!\n",cidade1);
  printf("População Carta N°1 (%s): %lu /Vs/ População Carta N°2 (%s): %lu.\n",cidade1,pop1,cidade2,pop2);
  }else if (pop1 == pop2)
  { //CASO DE EMPATE
  printf("No atributo POPULAÇÃO as cartas tem os mesmos valores!\n");
  printf("População Carta N°1 (%s): %lu /Vs/ População Carta N°2 (%s): %lu.\n",cidade1,pop1,cidade2,pop2);
  }else{ //CASO DE VITÓRIA DA CARTA 2
  printf("No atributo POPULAÇÃO a carta N°2 vence!\n");
  printf("População Carta N°2 (%s): %lu /Vs/ População Carta N°1 (%s): %lu.\n",cidade2,pop2,cidade1,pop1);
  }
  break;

case 2: if(comparacao2 = area1 > area2 ? 1 : 0)
  { //CASO DE VITÓRIA DA CARTA 1
  printf("No atributo ÁREA a carta N°1 (%s) vence!\n",cidade1);  
  printf("Área Carta N°1 (%s): %.2f /Vs/ Área Carta N°2 (%s): %.2f.\n",cidade1,area1,cidade1,area2);
  }else if (area1 == area2)
  { //CASO DE EMPATE
  printf("No atributo ÁREA as cartas tem os mesmos valores!\n");
  printf("ÁREA Carta N°1 (%s): %.2f /Vs/ ÁREA Carta N°2 (%s): %.2f.\n",cidade1,area1,cidade2,area2);
  }else{ //CASO DE VITÓRIA DA CARTA 2
  printf("No atributo ÁREA a carta N°2 (%s) vence!\n",cidade2);
  printf("Área Carta N°2 (%s): %.2f /Vs/ População Carta N°1 (%s): %.2f.\n",cidade2,area2,cidade1,area1);
  }
  break;

case 3: if(comparacao1 = pib1 > pib2 ? 1 : 0)
  { //CASO DE VITÓRIA DA CARTA 1
  printf("No atributo PIB a carta N°1 (%s) vence!\n",cidade1);
  printf("PIB Carta N°1 (%s): %.2f /Vs/ PIB Carta N°2 (%s): %.2f.\n",cidade1,pib1,cidade2,pib2);
  }else if (pib1 == pib2)
  { //CASO DE EMPATE
  printf("No atributo PIB as cartas tem os mesmos valores!\n");
  printf("PIB Carta N°1 (%s): %.2f /Vs/ PIB Carta N°2 (%s): %.2f.\n",cidade1,pib1,cidade2,pib2);
  }else{ //CASO DE VITÓRIA DA CARTA 2
  printf("No atributo PIB a carta N°2 (%s) vence!\n",cidade2);
  printf("PIB Carta N°2 (%s): %.2f /Vs/ PIB Carta N°1 (%s): %.2f.\n",cidade2,pib2,cidade1,pib1);
  }
  break;

case 4: if(comparacao1 = p_turistico1 > p_turistico2 ? 1 : 0)
  { //CASO DE VITÓRIA CARTA 1
  printf("No atributo PONTOS TURÍSTICOS a carta N°1 (%s) vence!\n",cidade1);
  printf("PONTOS TURÍSTICOS Carta N°1 (%s): %i /Vs/ PONTOS TURÍSTICOS Carta N°2 (%s): %i.\n",cidade1,p_turistico1,cidade2,p_turistico2);
  }else if (p_turistico1 == p_turistico2)
  { //CASO DE EMPATE
  printf("No atributo PONTOS TURÍSTICOS as cartas tem os mesmos valores!\n");
  printf("PONTOS TURÍSTICOS Carta N°1 (%s): %i /Vs/ PONTOS TURÍSTICOS Carta N°2 (%s): %i.\n",cidade1,p_turistico1,cidade2,p_turistico2);
  }else{ //CASO DE VITÓRIA CARTA 2
  printf("No atributo PONTOS TURÍSTICOS a carta N°2 (%s) vence!\n",cidade2);
  printf("PONTOS TURÍSTICOS Carta N°2 (%s): %i /Vs/ PONTOS TURÍSTICOS Carta N°1 (%s): %i.\n",cidade1,p_turistico2,cidade2,p_turistico1);
  }
  break;
  break;

case 5: if(comparacao1 = densidade1 > densidade2 ? 1 : 0)
  { //CASO DE VITÓRIA CARTA 1
  printf("No atributo DENSIDADE DEMOGRÁFICA a carta N°1 (%s) vence!\n",cidade1);
  printf("DENSIDADE DEMOGRÁFICA Carta N°1 (%s): %.2f /Vs/ DENSIDADE DEMOGRÁFICA Carta N°2 (%s): %.2f.\n",cidade1,densidade1,cidade2,densidade2);
  }else if (densidade1 == densidade2)
  { //CASO DE EMPATE
  printf("No atributo DENSIDADE DEMOGRÁFICA as cartas tem os mesmos valores!\n");
  printf("DENSIDADE DEMOGRÁFICA Carta N°1 (%s): %.2f /Vs/ DENSIDADE DEMOGRÁFICA Carta N°2 (%s): %.2f.\n",cidade1,densidade1,cidade2,densidade2);
  }else{ //CASO DE VITÓRIA CARTA 2
  printf("No atributo DENSIDADE DEMOGRÁFICA a carta N°2 (%s) vence!\n",cidade2);
  printf("DENSIDADE DEMOGRÁFICA Carta N°2 (%s): %.2f /Vs/ DENSIDADE DEMOGRÁFICA Carta N°1: %.2f.\n",cidade2,densidade2,densidade1);
  }
  break;

default:
printf("Alternativa inválida\n");
  break;
}
//SOMA DOS DOIS ATRIBUTOS COMPARADOS PARA DECIDIR O VENCEDOR
if (comparacao1 && comparacao2)
{
  printf("A carta N°1 (%s) venceu!.\n",cidade1);

}else if (comparacao1 != comparacao2)
{
  printf("Empate!");
}else{
  printf("A carta N°2 (%s) venceu!.\n",cidade2);
}



return 0;
}