#include <stdio.h>

float division(int x,int y);
int suma(int x, int y);
int resta(int x, int y);
int multiplicacion(int x,int y);
int modulo(int x,int y);

float division(int x, int y)
{

}

int suma(int x, int y)
{

}

int resta(int x, int y)
{

}

int multiplicacion(int x, int y)
{

}

int modulo(int x, int y)
{
  while(x>=y)
  {
    x-=y;
  }
  return x;
}


int main()
{
  int x, y, opc;
  switch(opc)
  {
      case 1:
            //SUMA
      {
        printf("Ingrese el primer sumando");
        scanf("%d",&x);
        printf("Ingrese el segundo sumando");
        scanf("%d",&y);
        printf("La suma: %d + %d = %d",x,y,suma(x,y));
      }
      break;
      case 2:
            //RESTA
      {
        printf("Ingrese el primer entero");
        scanf("%d",&x);
        printf("Ingrese el segundo entero");
        scanf("%d",&y);
        printf("La resta: %d - %d = %d",x,y,resta(x,y));
      }
      break;
      case 3:
            //MULTIPLICACION
      {
        printf("Ingrese el primer factor");
        scanf("%d",&x);
        printf("Ingrese el segundo factor");
        scanf("%d",&y);
        printf("La multiplicaci%cn: %d x %d = %d",162,x,y,multiplicacion(x,y));
      }
      break;
      case 4:
            //DIVISION
      {
        printf("Ingrese el dividendo");
        scanf("%d",&x);
        printf("Ingrese el divisor");
        scanf("%d",&y);
        printf("La divisi%cn: %d / %d = %f",162,x,y,division(x,y));
      }
      break;
      case 5:
            //MODULO
      {
        printf("Ingrese el primer entero");
        scanf("%d",&x);
        printf("Ingrese el segundo entero");
        scanf("%d",&y);
        printf("La operaci%cn: %d mod %d = %d",162,x,y,modulo(x,y));
      }
      break;
  }
}
