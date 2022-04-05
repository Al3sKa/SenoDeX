#include "SenXRaiz.h"
#include <stdio.h>

int main()
{
  double x;
  double senx1;
  double senx2;
        
  printf("Escribe un angulo: ");
  fflush(stdout);
  scanf("%lf", &x);
        
  SenXRaiz a;
  
    if(a.SenX(x, &senx1, &senx2))  
    {
        printf("\n\nEl seno del angulo %lf es %lf y %lf\n\n", x, senx1, senx2);
    }
