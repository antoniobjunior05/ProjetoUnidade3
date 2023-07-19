#ifndef PUTSPHERE
#define PUTSHPERE
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutSphere : public FiguraGeometrica{
  private:
    int xcenter;
    int ycenter;
    int zcenter;
    int radius;

  public:
    PutSphere(int xcenter, int ycenter, int zcenter, int radius,float r,float g, float b,float a);
  
    void draw(Sculptor &s);
    };
  #endif