class Aseo
{
      private: 
               int zona;
      public:
             Aseo ();             
             void SetZona(int z);
             int GetZona ();
             float Monto_aseo ();
};

//Constructor
Aseo::Aseo (){}

void Aseo::SetZona(int z)
{
     zona=z;
}

int Aseo::GetZona()
{
    return zona;
}

float Aseo::Monto_aseo ()
{
   float monto;
   switch (zona)
   {
      case 1: monto = 50;
              break;
      case 2: monto = 30;
              break;
      case 3: monto = 35;
              break;
      case 4: monto = 20;
              break;
   }
   return monto;
}
                          
      
           
