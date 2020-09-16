#include <stdio.h>
/*
 * main - prints all sizeof
 *
 * Return: Always 0
 */
int main(void)
{
  char b1;
  int b2;
  long b3;
  double b4;
  float b5:

  printf("Size of a char: %d byte(s)\n", sizeof(b1));
  printf("Size of an int: %d byte(s)\n", sizeof(b2));
  printf("Size of a long int: %d byte(s)\n", sizeof(b3));
  printf("Size of a long long int: %d byte(s)\n", sizeof(b4));
  printf("Size of a float: %d byte(s)\n", sizeof(b5));
  return (0);
}
