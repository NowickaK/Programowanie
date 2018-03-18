#include <stdio.h>
#define R 459.67

int main ()
{
  double Celsjusz, Kelvin,Farenheit,Rankine;
  const float K = 273.15;
  printf ("Wpisz temperature w Celsjuszach: ");
  scanf ("%lf", &Celsjusz);
    Kelvin=Celsjusz+K;
    Farenheit=(((9.0/5.0)*Celsjusz)+32);
    Rankine=Farenheit+R;
    
  printf ("Temperatura w Kelvinach wynosi: %.2lf\n", Kelvin);
  printf ("Temperatura w Farenheitach wynosi: %.2lf\n",Farenheit);
  printf ("Temperatura w Rankinach wynosi: %.2lf\n", Rankine);
  return 0;
}
