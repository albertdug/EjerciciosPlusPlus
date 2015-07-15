/*#ifndef DERIVADA2_H
#define DERIVADA2_H*/

#include "Derivada1.h"
class Derivada2 : public Derivada1 
{
 protected:
  int num_d2;
 public:
  Derivada2();
  Derivada2(int,int,int);
  void SetNum_d2(int x);
  int GetNum_d2(); 
  int Suma2();
};

 Derivada2::Derivada2() {}
 void Derivada2::SetNum_d2(int x) { num_d2 = x; }
 int Derivada2::GetNum_d2() { return num_d2; }
 int Derivada2::Suma2() { return num1 + num2 + num_d1 + num_d2; } 
//#endif
