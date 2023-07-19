#ifndef PUTVOXEL
#define PUTVOXEL
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutVoxel : public FiguraGeometrica{
  private:
    int x;
    int y;
    int z;
  
  public:
    PutVoxel (int x,int y,int z,float r,float g, float b, float a);
    void draw (Sculptor &s);
  };

#endif