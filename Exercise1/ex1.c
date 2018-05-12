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
  printf ("You are %d miles away.\n", distance);

  return 0;
}