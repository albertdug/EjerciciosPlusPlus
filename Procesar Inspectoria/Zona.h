class Zona
{
      private:
              int numero;
      public:
             Zona();             
             void SetNumero(int n);
             int GetNumero();
             int Papeleo();
             int Limite();
             int Monto();
};

Zona :: Zona() {}

void Zona :: SetNumero(int n)
{
     numero = n;
}

int Zona :: GetNumero()
{
    return numero;
}

int Zona :: Papeleo()
{
    switch (numero)
    {
           case 1 :
                return 130;
                break;
           case 2 :
                return 140;
                break;
           case 3 :
                return 150;
                break;
           case 4 :
                return 160;
                break;
    }
}

int Zona :: Limite()
{
    switch (numero)
    {
           case 1 :
                return 40;
                break;
           case 2 :
                return 60;
                break;
           case 3 : 
                return 30;
                break;
           case 4 :
                return 8;
                break;
     }
}

int Zona :: Monto()
{
    switch (numero)
    {
           case 1 :
                return 3;
                break;
           case 2 :
                return 3,5;
                break;
           case 3 :
                return 4;
                break;
           case 4 : 
                return 4,5;
                break;
    }
}
