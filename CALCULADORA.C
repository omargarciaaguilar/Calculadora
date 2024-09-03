#include <stdio.h>

int division(int ,int );
int suma(int num1, int num2);
int resta(int a, int b);
int multiplicacion(int,int);



int division(int x, int y)
{
  int div;
  div = x / y;
  printf("%d",div);
}

int suma(int num1, int num2)
{
  int res=num1 + num2;
  return res;
}
int suma(int a, int b)
{
  int res= a - b;
  return res;
}

int multiplicacion(int A, int B){
    
    int resultado;
    resultado= A* B;
    return resultado;
}



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
                printf("Por favor ingrese el primer número:");
                scanf("%d",&x);
                printf("Por favor ingrese el segundo número:");
                scanf("%d",&y);
                printf("la resta de %d más %d es: %d", x, y, resta(x,y));

            break;
            
            case 3:
            break;
            
            case 4:
            printf("escribe el primer numero\n");
            scanf("%d",&X);
            printf("escribe el segundo numero\n");
            scanf("%d",&Y);
            printf("el resultado de la multiplicacion es:%d",multiplicacion(X,Y));
            
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

int menu() {
    int opc;
    printf("\n---- Menu ----\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. \n");
    printf("4. Multiplicacion\n");
    printf("5. .\n");
    printf("6. Salir.\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opc);
    return opc;



    
return 0;
}


