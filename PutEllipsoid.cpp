#include "PutEllipsoid.h"
#include "Sculptor.h"
#include <math.h>


PutEllipsoid :: PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,     int rz,float r, float g,float b,float a) {
    
    this -> xcenter = xcenter ;
    this -> ycenter = ycenter;
    this -> zcenter = zcenter;
    this -> rx  = rx;
    this -> ry  = ry;
    this -> rz  = rz;
    this -> r = r;
    this -> g = g;
    this -> b = b;
    this -> a = a;  
         }
   void PutEllipsoid::draw (Sculptor &s){
     
     s.setColor(r, g, b, a);//seleciona as cores
    float aux_x, aux_y, aux_z;
    int i, j, k;
  
    for (i = xcenter - rx; i < xcenter+rx; i++){
        for ( j = ycenter-ry; j < ycenter+ry; j++){
            for ( k = zcenter-rz; k < zcenter + rz; k++){
            aux_x = ((float)(i-xcenter)*(float)(i-xcenter))/(rx * rx);
            aux_y = ((float)(j-ycenter)*(float)(j-ycenter))/(ry * ry);
            aux_z = ((float)(k-zcenter)*(float)(k-zcenter))/(rz * rz);
//calculo da elipsoide
            if ((aux_x + aux_y + aux_z) < 1){
                s.putVoxel(i,j,k);
              }
            }
          }
       }
     } 