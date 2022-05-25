#include <stdio.h>

void swap(int *a, int *b);

int main()
{
  int x = 3;
  int y = 4;

  swap(&x, &y);
  printf("x = %d, y = %d\n", x, y);
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}