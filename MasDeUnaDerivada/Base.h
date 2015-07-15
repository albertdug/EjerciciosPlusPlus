/*#ifndef BASE_H 
#define BASE_H*/
using namespace std;
class Base 
{
 protected:
  int num1, num2;
 public:
  Base();  
  Base(int x, int y);
  void SetNum1(int x); 
  void SetNum2(int y); 
  int GetNum1(); 
  int GetNum2();
};
  Base::Base(){} 
  void Base::SetNum1(int x) { num1 = x; }
  void Base::SetNum2(int y) { num2 = y; }
  int Base::GetNum1() { return num1; }
  int Base::GetNum2() { return num2; } 
//#endif
