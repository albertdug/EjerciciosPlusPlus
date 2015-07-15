class Venta
{
      private:
              int sala, dia, e_n, e_a, e_t;
      public:
             Venta ();
             Venta(int s, int d, int ni, int ad,int ter);
             void SetSala(int);
             void SetDia(int);
             void SetEntradaNino(int);
             void SetEntradaAdulto(int);
             void SetEntradaTercera(int);
             int GetSala();
             int GetDia();
             int GetEntradaNino();
             int GetEntradaAdulto();
             int GetEntradaTercera();
             float CalcularPrecio();
};

Venta :: Venta() {}

Venta :: Venta(int s, int d, int ni, int ad, int ter)
{
      sala = s;
      dia = d;
      e_n = ni;
      e_a = ad;
      e_t = ter;
}

void Venta :: SetSala(int s)
{
     sala = s;
}

void Venta :: SetDia(int d)
{
     dia = d;
}

void Venta :: SetEntradaNino(int ni)
{
     e_n = ni;
}

void Venta :: SetEntradaAdulto(int ad)
{
     e_a = ad;
}

void Venta :: SetEntradaTercera(int ter)
{
     e_t = ter;
}

int Venta :: GetSala()
{
    return sala;
}

int Venta :: GetDia()
{
    return dia;
}

int Venta :: GetEntradaNino()
{
    return e_n;
}

int Venta :: GetEntradaAdulto()
{
    return e_a;
}

int Venta :: GetEntradaTercera()
{
    return e_t;
}
             
float Venta :: CalcularPrecio()
{
      if(dia == 1)
         return ((e_n*8) + (e_a*14) + (e_t*10))/2;
      else
         return (e_n*8) + (e_a*14) + (e_t*10);
}
        
