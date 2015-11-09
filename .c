#include<stdio.h>
#include<windows.h>

void imprimirmenu(void); //prototipo

int main() 
{
    
 int s=0,pago,cuenta=0,cambio,m=0 ,opcion,a=0,b=0,c=0,d=0;   
 int p1=40,p2=15,p3=55,p4=10;   
  while(s!=1){
         system("cls");  
  
  imprimirmenu(); //llamada a la función

  scanf("%d",&opcion);
 if(opcion!=5){ 
switch(opcion)
{
  
  case 1:
  a=a+1; 
  p1=p1*(a);
  break;
  case 2:
  b=b+1;
  p2=p2*(b);
  break;
  case 3:
  c=c+1;
  p3=p3*(c);
  break;
  case 4:
  d=d+1;
  p4=p4*(d);
  break;
             }
 printf("\n\tOrden:\n"); 
            
 if(a>0){printf("\n%d Torta cubana     $%d",a,p1);}
 if(b>0){printf("\n%d Torta de jamon   $%d",b,p2);}
 if(c>0){printf("\n%d Torta especial   $%d",c,p3);}
 if(d>0){printf("\n%d Refresco         $%d",d,p4);}             
              
              
 printf("\n\nDesea pedir algo mas\n\n 0 = si\n 1 = no\n\n");
 scanf("%d", &s); 
 m=1;         
              }
    else{ s=1;}                
}    

if(m==1)
{  if(a>0){cuenta=cuenta+p1;}     
   if(b>0){cuenta=cuenta+p2;}
   if(c>0){cuenta=cuenta+p3;}
   if(d>0){cuenta=cuenta+p4;} 
 printf("\n A pagar: %d", cuenta);      
 printf("\n\n Monto recibido:\n\n");
 scanf("%d", &pago);    
 cambio=pago-cuenta;
 printf("Cambio = %d\n\n", cambio);
 printf("Gracias por su compra :)\n");
 }


   fflush(stdin);
   getchar(); 
    }
void imprimirmenu(void)  //Definicion de la función
 
 {  char c;   
 FILE *apuntador;
 
 if((apuntador=fopen("menu.txt","r"))==NULL) 
 {
  printf("El archivo no pudo leerse\n");
                                       
                                       }
  else
  {
  while(feof(apuntador)==0)
 {     c=fgetc(apuntador);
       printf("%c",c);}    
      }
  fclose(apuntador);      
      }  
