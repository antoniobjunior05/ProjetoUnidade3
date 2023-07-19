#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Sculptor.h"

class FiguraGeometrica {

protected:
  

public:
  float r,g,b; // Cores
  float a; // Transparencia
  FiguraGeometrica () {};
  virtual ~FiguraGeometrica () {};
  virtual void draw (Sculptor &s) = 0; 
 
  };
#endif