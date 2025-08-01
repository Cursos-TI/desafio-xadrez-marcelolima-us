#include <stdio.h>

int main()
{
  // Definindo o número de movimentos para cada peça
  const int TORRE_MOVIMENTOS = 5;  // Torre se move 5 casas para direita
  const int BISPO_MOVIMENTOS = 5;  // Bispo se move 5 casas na diagonal
  const int RAINHA_MOVIMENTOS = 8; // Rainha se move 8 casas para esquerda

  // Simulação do movimento da Torre (usando for)
  printf("\n=== Movimento da Torre ===\n");
  for (int i = 1; i <= TORRE_MOVIMENTOS; i++)
  {
    printf("Direita\n");
  }

  // Simulação do movimento do Bispo (usando while)
  printf("\n=== Movimento do Bispo ===\n");
  int movimentosBispo = 1;
  while (movimentosBispo <= BISPO_MOVIMENTOS)
  {
    printf("Cima, Direita\n");
    movimentosBispo++;
  }

  // Simulação do movimento da Rainha (usando do-while)
  printf("\n=== Movimento da Rainha ===\n");
  int movimentosRainha = 1;
  do
  {
    printf("Esquerda\n");
    movimentosRainha++;
  } while (movimentosRainha <= RAINHA_MOVIMENTOS);

  return 0;
}
