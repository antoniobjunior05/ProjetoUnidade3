#ifndef CUTVOXEL
#define CUTVOXEL
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class CutVoxel: public FiguraGeometrica{
  private:
    int x;
    int y;
    int z;

  public:
    CutVoxel (int x,int y,int z);
    void draw (Sculptor &s);
  };

  #endif