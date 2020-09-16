#include <stdio.h>
/*
 * main - prints all sizeof
 *
 * Return: Always 0
 */
int main(void)
{
  char 1;
  int 2;
  long 3;
  double 4;
  float 5:

  printf("Size of a char: %d byte(s)\n", sizeof(1));
  printf("Size of an int: %d byte(s)\n", sizeof(2));
  printf("Size of a long int: %d byte(s)\n", sizeof(3));
  printf("Size of a long long int: %d byte(s)\n", sizeof(4));
  printf("Size of a float: %d byte(s)\n", sizeof(5));
  return (0);
}
