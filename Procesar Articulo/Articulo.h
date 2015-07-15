class Articulo
{
      /** * Propiedades o atributos de la clase Articulo*/
      private:
      long codigo;
      float costo;
      /** * Metodos de la clase Articul */
      public:
      //constructor
      Articulo();
      //constructor
      Articulo(long, float);
      void SetCodigo(long);
      void SetCosto(float);
      long GetCodigo();
      float GetCosto();
      float Precio_Detal();
      float Precio_Mayor();
};
//Constructor
Articulo :: Articulo  () {}

//Constructor
Articulo :: Articulo(long cod, float c)
{
    codigo = cod;
    costo = c;
}

// Setters
void Articulo  :: SetCodigo(long cod)
{
     codigo = cod;
}

void Articulo :: SetCosto(float c)
{
     costo = c;
}

// Getters

long Articulo :: GetCodigo()
{
     return codigo;
}

float Articulo :: GetCosto()
{
      return costo;
}

//Metodo que calcula los precios  
float Articulo :: Precio_Detal()
{ 
      return costo+(costo*30/100);
}
float Articulo :: Precio_Mayor()
{
      return costo+(costo*15/100);
}
      
      
