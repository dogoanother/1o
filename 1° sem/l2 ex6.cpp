#include <stdio.h>
int main()
{
int n, q, b_i, n_inverso;
  printf("Digite um valor : ");
  scanf("%d", &n);
  n_inverso = 0;
  q = n;         
  b_i = 1;
  while(q > 9)
  {
    b_i = b_i*10;
    q = q/10;
  }
  q = n;
  if(q > 9)
 {  while(q != 0
    {
 n_inverso = n_inverso + (q%10)*b_i;
      q = q/10;
      b_i = b_i/10;
  }
  }else
    n_inverso = n;
  if(n_inverso == n)
    printf("%d == %d portanto %d eh um palindromo.\n", n, n_inverso, n);
  else
    printf("%d != %d portanto %d nao eh um palindromo.\n", n, n_inverso, n);
  return 0;
}

