#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));
    int r1, r2, r0, suma, resta, mult, divn;
    
    r0=rand()% 5 + 1;
    
    while(r0<5){
       r1=rand()%(5 + 1 - 1) + 1;
       r2=rand()%10; 
       switch(r0)
       {
           case 1:
               suma=r1+r2;
               printf("%d + %d = %d\n", r1, r2, suma);
           break;
           
           case 2:
               resta=r1-r2;
               printf("%d - %d = %d\n", r1, r2, resta);
               
           break;
           
           case 3:
               mult=r1*r2;
               printf("%d * %d = %d\n", r1, r2, mult);
           break;
           
           case 4:
                divn=r1/r2;
                printf("%d / %d = %d\n", r1, r2, divn);
                /*if(r2 != 0){
                   divn=r1/r2;
                   printf("%d / %d = %d\n", r1, r2, divn);
                }
                else{
                    printf("el valor dos es 0, no se puede dividir\n");
                }*/
           break;
           
       }
       r0 = rand() % 5 + 1;
    }
    return 0;
}
