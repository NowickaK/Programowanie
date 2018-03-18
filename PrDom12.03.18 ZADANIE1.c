#include <stdio.h>

#include <limits.h>

#include <float.h>



int 
main ()

{
  
int int1 = 3;
  
signed int signedint = 0;
  
unsigned int unsignedint = 0;
  
short int shortint = 1;
 
long int longint = 564;
  
char char1 = 1;
  
signed char signedchar = 0;
  
unsigned char unsignedchar = 0;
  
float float1 = 333;
  
double double1 = 4782;
  
long double longdouble = 1;

  

printf ("Rozmiary i zakresy poszczegolnych typow zmiennych:\n");
  
printf ("Rozmiar int: %d Najmniejsza wartosc: %d Najwiêksza wartosc: %d\n", sizeof (int1),INT_MIN,INT_MAX);
  
printf ("Rozmiar signed int: %d Najmniejsza wartosc: %d Najwiêksza wartosc: %d\n", sizeof (signedint),INT_MIN,INT_MAX);
  
printf ("Rozmiar unsigned int: %d Najmniejsza wartosc: %d Najwiêksza wartosc: %d\n", sizeof (unsignedint),INT_MIN,INT_MAX);
  
printf ("Rozmiar short int: %d Najmniejsza wartosc: %d Najwiêksza wartosc: %d\n", sizeof (shortint),INT_MIN,INT_MAX);
  
printf ("Rozmiar long int: %d Najmniejsza wartosc: %d Najwiêksza wartosc: %d\n", sizeof (longint),INT_MIN,INT_MAX);
  
printf ("Rozmiar char: %d\n", sizeof (char1));
  
printf ("Rozmiar signed char: %d\n", sizeof (signedchar));
  
printf ("Rozmiar unsigned char: %d\n", sizeof (unsignedchar));
  
printf ("Rozmiar float: %d\n", sizeof (float1));
  
printf ("Rozmiar double: %d\n", sizeof (double1));
  
printf ("Rozmiar long double: %d\n", sizeof (longdouble));
  

return 0;

}