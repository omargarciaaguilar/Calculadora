#include <stdio.h>

int division(int ,int );
int suma(int num1, int num2);






int main(){
    
    int opc,division, x,y;
    
    do{
        printf("que deseas hacer:\n");
        
        scanf("%d",&opc);
        
        switch(opc){
            
            case 1:
                printf("Por favor ingrese el primer número:");
                scanf("%d",&x);
                printf("Por favor ingrese el segundo número:");
                scanf("%d",&y);
                printf("la suma de %d más %d es: %d", x, y, suma(x,y));
            break;
            
            case 2:
            break;
            
            case 3:
            break;
            
            case 4:
            break;
            
            case 5:
            break;
            
            case 6:
            printf("saliendo");
            break;
            
            default:
            printf("opcion no valida");
            break;
        }
        
    }while(opc!=6);
    
    
    
    return 0;
}

int division(int x, int y)
{
  int div;
  div = x / y;
  return div;
}

int suma(int num1, int num2)
{
  int res=num1 + num2;
  return res;
}
