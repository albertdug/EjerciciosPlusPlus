using namespace std;
class Doctor
{
      private:
              long cedula;
              string nombre;
              int cant;
              float monto;
      public:
             Doctor();
             void SetCedula(long c);
             void SetNombre(string n);
             void SetCantidad(int ca);
             void SetMonto(float m);
             long GetCedula();
             string GetNombre();
             int GetCantidad();
             float GetMonto();
};

Doctor :: Doctor () {}

void Doctor :: SetCedula(long c)
{
     cedula = c;
}
void Doctor :: SetNombre(string n)
{
     nombre = n;
}
void Doctor :: SetCantidad(int ca)
{
     cant = ca;
}
void Doctor :: SetMonto(float m)
{
     monto = m;
}
long Doctor :: GetCedula()
{
     return cedula;
}
string Doctor :: GetNombre()
{
       return nombre;
}
int Doctor :: GetCantidad()
{
    return cant;
}
float Doctor :: GetMonto()
{
      return monto;
}
