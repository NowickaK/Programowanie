#include <stdio.h>


int 
main ()
{

  int int1 = 3;


  short int shortint = 1;

  long int longint = 564;


  char char1 = 1;


  float float1 = 333;


  double double1 = 4782;


  long double longdouble = 1;


  printf ("Rozmiary poszczegolnych typow zmiennych:\n");

  printf ("Rozmiar int: %d\n", sizeof (int1));

  printf ("Rozmiar short int: %d\n", sizeof (shortint));

  printf ("Rozmiar long int: %d\n", sizeof (longint));

  printf ("Rozmiar char: %d\n", sizeof (char1));

  printf ("Rozmiar float: %d\n", sizeof (float1));

  printf ("Rozmiar double: %d\n", sizeof (double1));

  printf ("Rozmiar long double: %d\n", sizeof (longdouble));
return 0;
}