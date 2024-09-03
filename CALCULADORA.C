#include <stdio.h>

int division(int ,int );


int division(int x, int y)
{
  int div;
  div = x / y;
  return div;
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
