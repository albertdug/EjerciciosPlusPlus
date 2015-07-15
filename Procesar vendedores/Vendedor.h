using namespace std;
class Vendedor
{
      private:
             string cedula, nombre;
             float sueldob, montov;
      public:
             Vendedor();
             void SetCedula(string c);
             void SetNombre(string n);
             void SetSueldoBase(float sb);
             void SetMontoVentas(float mv);
             stirng GetCedula();
             string GetNombre();
             float GetSueldoBase();
             float GetMontoVentas();
             float CalculaSN();
};

Vendedor :: Vendedor() {}

void Vendedor :: SetCedula(string c)
{
     cedula = c;
}

void Vendedor :: SetNombre(string n)
{
     nombre = n;
}
void Vendedor :: SetSueldoBase(float sb)
{
     sueldob = sb;
}
void Vendedor :: SetMontoVentas(float mv)
{
     montov = mv;
}

string Vendedor :: GetCedula()
{
       return cedula;
}
string Vendedor :: GetNombre()
{
       return nombre;
}

float Vendedor :: GetSueldoBase()
{
      return sueldob;
}
float Vendedor :: GetMontoVentas()
{
      return  montov;
}     
float Vendedor :: CalcularSN()
{
      float sn;
      sn = sueldob + (montov *20/100);
      return sn;                  
