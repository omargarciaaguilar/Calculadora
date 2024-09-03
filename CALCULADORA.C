#include <stdio.h>

int division(int ,int );
int modulo(int a, int b);

int division(int x, int y)
{
  int div;
  div = x / y;
  return div;
}

int modulo(int a, int b)
{
  while(a>=b)
  {
    a-=b;
  }
  return a;
}


int main(){
    
    int opc,division, x,y;
    
    do{
        printf("que deseas hacer:\n");
        
        scanf("%d",&opc);
        
        switch(opc){
            
            case 1:
            break;
            
            case 2:
            break;
            
            case 3:
            break;
            
            case 4:
            break;
            
            case 5:
            {
              int a,b;
              printf("Ingrese el primer entero: ");
              scanf("%d",&a);
              printf("\nIngrese el segundo entero: ");
              scanf("%d",&b);
              printf("%d mod %d es igual a %d",a,b,modulo(a,b));
            }
            break;
            
            case 6:
            printf("saliendo");
            break;
            
            default:
            printf("opcion no valida");
            break;
        }
        
    }
    
    
    
    return 0;
}
