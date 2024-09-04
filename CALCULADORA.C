#include <stdio.h>

int division(int ,int );
int suma(int , int );
int resta(int , int );
int multiplicacion(int ,int );
int modulo(int ,int );

int main()
{
  int x, y, opc;
  switch(opc)
  {
      case 1:
            //SUMA
      break;
      case 2:
            //RESTA
      break;
      case 3:
            //MULTIPLICACION
      break;
      case 4:
            printf("Ingrese el primer numero: \n");
            scanf("%d",&x);
            printf("Ingrese el primer numero: \n");
            scanf("%d",&y);
            printf("El resultado es:%d",division(x,y));
      break;
      case 5:
            //MODULO
      break;
  }
}

int division(int x, int y)
{
  int resultado;
  resultado = x / y;
  return resultado;
}
