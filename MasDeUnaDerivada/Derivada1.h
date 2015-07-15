/*#ifndef DERIVADA1_H
#define DERIVADA1_H*/
#include "Base.h"
class Derivada1 : public Base 
{
 protected:
  int num_d1;
 public:
  Derivada1();
  Derivada1(int,int,int);
  void SetNum_d1(int x);
  int GetNum_d1(); 
  int Suma1();
};

 Derivada1::Derivada1() {}
 void Derivada1::SetNum_d1(int x) { num_d1 = x; }
 int Derivada1::GetNum_d1() { return num_d1; }
 int Derivada1::Suma1() { return num1 + num2 + num_d1; } 
//#endif
