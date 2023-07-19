#include "CutSphere.h"
#include <math.h>

CutSphere :: CutSphere(int xcenter, int ycenter, int zcenter, int radius){
    
    this -> xcenter = xcenter ;
    this -> ycenter = ycenter;
    this -> zcenter = zcenter;
    this -> radius  = radius;
    this -> r = r;
    this -> g = g;
    this -> b = b;
    this -> a = a;
         }
  
   void CutSphere::draw (Sculptor &s){
     int i, j, k;

     s.setColor(r, g, b, a);//seleciona as cores

     for(i = ((xcenter - radius)); i < (xcenter + radius); i++){
       for(j = (ycenter - radius); j < (ycenter + radius); j++){
         for(k = (zcenter - radius); k < (zcenter + radius); k++){
           if ((pow(i-xcenter,2)) + (pow(j-ycenter,2)) + (pow(k-zcenter,2)) <=                   (pow(radius,2))){

             s.cutVoxel(i,j,k);
           }   
         }
       }
     }
  }  
  