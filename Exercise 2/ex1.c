/*
  Dust Off That Compiler
  BUILD & RUN: make
*/
#include <stdio.h>

/* This is a comment */
/*
  ARGument Count, ARGument Vector
*/
int main (int argc, char * argv[])
{
  int distance = 100;

  // This is also a comment

  /*
    %d for integer in decimal (base 10)
    %x for hexadecimal integer
    %o for octal integer
  */
  printf ("\n == PROGRAM OUTPUT ==\n");
  printf ("\nYou are %d miles (base 10) away.\n", distance);
  printf ("You are %x (base 16) miles away.\n", distance);
  printf ("You are %o (base 8) miles away.\n", distance);
  printf ("argc = %d.\n", argc);
  for (int i = 0; i < argc; i++)
    printf ("argv[%d] = %s.\n", i, argv[i]);
  
  printf ("\n ====================\n");
  return 0;
}