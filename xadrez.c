#include <stdio.h>

int main()
{
  // Definindo o número de movimentos para cada peça
  const int TORRE_MOVIMENTOS = 5;  // Torre se move 5 casas para direita
  const int BISPO_MOVIMENTOS = 5;  // Bispo se move 5 casas na diagonal
  const int RAINHA_MOVIMENTOS = 8; // Rainha se move 8 casas para esquerda
  const int CAVALO_VERTICAL = 2;   // Cavalo se move 2 casas para baixo
  const int CAVALO_HORIZONTAL = 1; // Cavalo se move 1 casa para esquerda

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

  // Simulação do movimento do Cavalo (usando for e while aninhados)
  printf("\n=== Movimento do Cavalo ===\n");

  // Loop externo (for) para movimento vertical (2 casas para baixo)
  for (int movVertical = 1; movVertical <= CAVALO_VERTICAL; movVertical++)
  {
    printf("Baixo\n");
  }

  // Loop interno (while) para movimento horizontal (1 casa para esquerda)
  int movHorizontal = 1;
  while (movHorizontal <= CAVALO_HORIZONTAL)
  {
    printf("Esquerda\n");
    movHorizontal++;
  }

  return 0;
}
