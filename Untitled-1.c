#include <stdio.h>

int main(void) {
  int n, i, t1, t2, proxTermo;
  t1 = 0;
  t2 = 1;


  printf("Insira um numero para verificar a sequencia de fibonacci correspondente: ");
  scanf("%d", &n);
  printf("%d", t1);
  printf("%d", t2);

  for (i =0; i <= n; i++) {
    proxTermo = t1 + t2;
    printf("%d", proxTermo);
    t1 = t2;
    t2 = proxTermo;
    
  }

  if (n == t1 || n == t2) {
      printf("\n O numero %d pertence a sequencia de Fibonacci.\n", n);
      return 0;
  } else {
    printf("\n O numero %d nâo pertence a sequencia de Fibonacci.\n", n);
  }
  

  
  return 0;
}