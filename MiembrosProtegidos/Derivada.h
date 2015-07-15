#include "Base.h"
class Derivada : public Base 
{
 int num_d;
 public:
  Derivada();
  Derivada(int,int,int);
  void SetNum_d(int x);
  int GetNum_d(); 
  int Suma();
};

 Derivada::Derivada() {}
 Derivada::Derivada(int x, int y, int z) : Base(x,y) {num_d = z;}
 void Derivada::SetNum_d(int x) { num_d = x; }
 int Derivada::GetNum_d() { return num_d; }
 int Derivada::Suma() { return num1 + num2 + num_d; } 
