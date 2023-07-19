#ifndef CUTSPHERE
#define CUTSHPERE
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class CutSphere : public FiguraGeometrica{
  private:
    int xcenter;
    int ycenter;
    int zcenter;
    int radius;
  public:
    CutSphere(int xcenter, int ycenter, int zcenter, int radius);

    void draw (Sculptor &s);
    };

    #endif