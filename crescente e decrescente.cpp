#include <stdio.h>
 
int main() {
 
   int X, Y;
   
   do{
   	 scanf("%d",&X);
     scanf("%d",&Y);
     if(X<Y){
         printf("Crescente\n");
     }
     if(X>Y){
         printf("Decrescente\n");
     }
   }while(X!=Y);
 
 
    return 0;
}
