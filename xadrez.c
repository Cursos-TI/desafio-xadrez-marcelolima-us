#include <stdio.h>

// Funções recursivas para movimentação das peças
void moveTorre(int casasRestantes)
{
  if (casasRestantes <= 0)
    return;
  printf("Direita\n");
  moveTorre(casasRestantes - 1);
}

void moveRainha(int casasRestantes)
{
  if (casasRestantes <= 0)
    return;
  printf("Esquerda\n");
  moveRainha(casasRestantes - 1);
}

void moveBispoRecursivo(int casasRestantes)
{
  if (casasRestantes <= 0)
    return;
  printf("Cima, Direita\n");
  moveBispoRecursivo(casasRestantes - 1);
}

int main()
{
  // Definindo o número de movimentos para cada peça
  const int TORRE_MOVIMENTOS = 5;  // Torre se move 5 casas para direita
  const int BISPO_MOVIMENTOS = 5;  // Bispo se move 5 casas na diagonal
  const int RAINHA_MOVIMENTOS = 8; // Rainha se move 8 casas para esquerda
  const int CAVALO_VERTICAL = 2;   // Cavalo se move 2 casas para cima
  const int CAVALO_HORIZONTAL = 1; // Cavalo se move 1 casa para direita

  // Simulação do movimento da Torre (usando recursão)
  printf("\n=== Movimento da Torre (Recursivo) ===\n");
  moveTorre(TORRE_MOVIMENTOS);

  // Simulação do movimento do Bispo (usando recursão e loops aninhados)
  printf("\n=== Movimento do Bispo (Recursivo) ===\n");
  moveBispoRecursivo(BISPO_MOVIMENTOS);

  printf("\n=== Movimento do Bispo (Loops Aninhados) ===\n");
  // Loop externo para movimento vertical
  for (int vertical = 1; vertical <= BISPO_MOVIMENTOS; vertical++)
  {
    // Loop interno para movimento horizontal
    for (int horizontal = 1; horizontal <= 1; horizontal++)
    {
      printf("Cima, Direita\n");
    }
  }

  // Simulação do movimento da Rainha (usando recursão)
  printf("\n=== Movimento da Rainha (Recursivo) ===\n");
  moveRainha(RAINHA_MOVIMENTOS);

  // Simulação do movimento do Cavalo (usando loops complexos)
  printf("\n=== Movimento do Cavalo ===\n");

  // Loops aninhados com múltiplas variáveis e condições
  for (int fase = 0; fase < 2; fase++)
  {
    for (int movimento = 1; movimento <= (fase == 0 ? CAVALO_VERTICAL : CAVALO_HORIZONTAL); movimento++)
    {
      // Usando break e continue para controle mais preciso
      if (fase == 0 && movimento > CAVALO_VERTICAL)
        break;
      if (fase == 1 && movimento > CAVALO_HORIZONTAL)
        continue;

      // Determinando a direção baseado na fase do movimento
      if (fase == 0)
      {
        printf("Cima\n");
      }
      else
      {
        printf("Direita\n");
      }
    }
  }

  return 0;
}
