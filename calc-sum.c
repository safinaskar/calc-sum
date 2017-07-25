// заюзать double?
#include <stdio.h>

int main(void)
{
  long long sum = 0;
  long long curr;

  while (scanf(" %lld", &curr) == 1)
    {
      sum += curr;
    }

  printf("%lld\n", sum);

  return 0;
}
