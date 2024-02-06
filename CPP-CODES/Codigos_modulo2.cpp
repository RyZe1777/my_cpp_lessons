                                            PRINTF

#include <stdio.h>

int main(){

printf("caracteres: %c %c %c \n ",'a','b','c');
printf("Decimals: %d %ld \n",1997,65000L);
printf("preceding with blanks: %10d, \n", 19778111);
printf("with trick: %*d \n",10,10);


    
}
------------------------------------------------------------------------------------------------------------------------------------
                                           SCANF 

int main(){

char nome[50];

printf("Nome: ");
scanf("%s", nome);
printf("ola %s \n", nome);

}

----------------------------------------------------------------------------------------------------------------------------------


