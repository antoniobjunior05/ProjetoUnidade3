#ifndef PUTELLIPSOID
#define PUTELLIPSOID
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutEllipsoid : public FiguraGeometrica{
  private:
    int xcenter;
    int ycenter;
    int zcenter;
    int rx;
    int ry;
    int rz;

  public:
    PutEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz,float r,float g, float b,float a);
    void draw (Sculptor &s);
  };

  #endif