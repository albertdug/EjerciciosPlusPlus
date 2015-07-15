using namespace std;
class Base 
{
 protected:
  int num1, num2;
 /*
 UN MIEMBRO PRIVADO DE UNA CLASE BASE NO ES ACCESIBLE POR 
 CUALQUIER OTRA PARTE DE UN PROGRAMA, INCLUYENDO CUALQUIER 
 CLASE DERIVADA. SIN EMBARGO, LOS MIEMBROS PROTEGIDOS SE 
 COMPORTAN DIFERENTES. CUANDO UNA CLASE BASE ES HEREDADA COMO 
 PUBLICA, LOS MIEMBROS PROTEGIDOS EN LA CLASE BASE SE 
 CONVIERTEN EN MIEMBROS PROTEGIDOS DE LA CLASE DERIVADA, Y '
 SON' ACCESIBLES A LA CLASE DERIVADA. ADEMÁS, USANDO 'PROTECTED'
 USTED PUEDE CREAR MIEMBROS DE CLASES QUE SON PRIVADOS PARA SU 
 CLASE, PERO QUE AUN ASÍ PUEDEN SER HEREDADOS Y ACCESADOS POR 
 UNA CLASE DERIVADA.
 */
 public:
  Base();  
  Base(int x, int y);
  void SetNum1(int x); 
  void SetNum2(int y); 
  int GetNum1(); 
  int GetNum2();
};
  Base::Base(){} 
  Base::Base(int x, int y)
  {
    num1 = x;
    num2 = y;
  }
  void Base::SetNum1(int x) { num1 = x; }
  void Base::SetNum2(int y) { num2 = y; }
  int Base::GetNum1() { return num1; }
  int Base::GetNum2() { return num2; } 

