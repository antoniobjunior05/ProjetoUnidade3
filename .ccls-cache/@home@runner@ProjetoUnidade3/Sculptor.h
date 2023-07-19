#ifndef Sculptor_h
#define Sculptor_h

struct Voxel {
  float r,g,b,a; // Cores // Transparencia
  bool show; // Mostrado ou nao
};

class Sculptor {
private:
  Voxel ***v; // Ponteiro para ponteiro para ponteiro do tipo struct voxel
  int nx,ny,nz; // Dimenções da matriz
  float r,g,b,a; // Definições das cores red, green, blue e a transparência dos voxels
public:
  Sculptor(int _nx, int _ny, int _nz); //Construtor responsável por iniciar o objeto
  ~Sculptor(); //Destrutor responsável por finalizar o objeto
  void setColor(float r, float g, float b, float alpha); //Seleciona a cor e a transparência do voxel
  void putVoxel(int x, int y, int z); // Implementa um voxel em (x,y,z)
  void cutVoxel(int x, int y, int z); //Extrai um voxel em (x,y,z) 
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1); //Implementação de um bloco de voxels
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); //Extração de um bloco de voxels
  void putSphere(int xcenter, int ycenter, int zcenter, int radius); //Implementação de um bloco de voxels em formato de esfera
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius); //Extração de um bloco de voxels em formato de esfera
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); //Implementação de um bloco de voxels em formato de elipsoide 
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); //Extração de um bloco de voxels em formato de elipsoide 
  void writeOFF(char* filename); //Gravação da escultura em arquivo
};

#endif