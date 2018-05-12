#include <stdio.h>

int main (int argc, char * argv[])
{
  int age = 10;
  int height = 72;
  char * str = "HELLO!";

  printf ("\n == PROGRAM OUTPUT ==\n");

  printf ("\nI am %d years old\n", age);
  printf ("I am %d inches tall\n", height);

  printf ("\n ===================== \n");

  printf ("\n == EXTRA CREDIT ==\n");
  printf ("\n >> printf escape codes \nand format sequences <<\n");

  printf ("\n -- Conversion Characters --\n");

  printf ("\n%%d (decimal) age = %d \n", age);
  printf ("%%e (exponential) age = %e \n", age);
  printf ("%%f (floating point) age = %f \n", age);
  printf ("%%g (chooses shorter of %%e and %%f) age = %g \n", age);
  printf ("%%x (hexadecimal) age = %x \n", age);
  printf ("%%o (octal) age = %o \n", age);
  printf ("%%c (character) str = %c \n", str[0]);
  printf ("%%c (string) str = %s \n", str);

  printf ("\n -- Conversion Characters --\n");

  printf ("\nalert (beep)	\a (\\a)\n");
  printf ("Backslash \\ (\\\\)\n");
  printf ("Backspace \b (\\b)\n");
  printf ("Carriage Return \r (\\r)\n");
  printf ("Double Quote \"  (\\\")\n");
  printf ("Formfeed \f  (\\f)\n");
  printf ("Horizontal Tab \t (\\t)\n");
  printf ("Newline \n (\\n)\n");
  printf ("NULL Character \0 (\\0)\n");
  printf ("Single Quote \' (\\')\n");
  printf ("Vertical Tab \v (\\v)\n");
  printf ("Question Mark \? (\\?)\n");
  printf ("Percent \% (\\%)\n");

  printf ("\n ===================== \n");

  return 0;
}