#include "SenXRaiz.h"
#include <math.h>

bool SenXRaiz::SenX(double x, double* senx1, double* senx2) {
    
    double coseno = cos(x);
    
    double cosenocuadrado = pow(coseno, 2);
    
  if (x==0.0) return false;
  
  *senx1 = sqrt(1 - cosenocuadrado);
  
  if (senx1 == 0) return false;
        
        *senx2 = -1 * sqrt(1 - cosenocuadrado);
  
  return true;
}
