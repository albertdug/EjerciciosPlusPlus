class Rectangulo
{
      private:
              float base, altura;
      public:
      Rectangulo ();
      Rectangulo (float, float);
      void SetBase (float);
      void SetAltura (float);
      float GetBase ();
      float GetAltura ();
      float Area ();
      float Perimetro ();
};

Rectangulo::Rectangulo (){}

Rectangulo::Rectangulo (float bas, float alt)
{
 altura=alt;
 base=bas;
}
void Rectangulo::SetBase (float bas
)
{
     base=bas;
}
void Rectangulo::SetAltura (float alt)
{
     altura=alt;
}
float Rectangulo::GetBase ()
{
      return base;
}
float Rectangulo::GetAltura ()
{
      return altura;
}
float Rectangulo::Area ()
{
      return base * altura;
}
float Rectangulo::Perimetro ()
{
      return 2*base + 2*altura;
}
