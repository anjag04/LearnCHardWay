/*
  Dust Off That Compiler
  BUILD: make ex1
  RUN: ./ex1
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
  printf ("You are %d miles (base 10) away.\n", distance);
  printf ("You are %x (base 16) miles away.\n", distance);
  printf ("You are %o (base 8) miles away.\n", distance);
  printf ("argc = %d.\n", argc);
  for (int i = 0; i < argc; i++)
    printf ("argv[%d] = %s.\n", i, argv[i]);

  return 0;
}