#include<stdio.h>
#include<stdlib.h>

int main(){
/*int x = 9, i=1, j=2;
float y =  7.5;
char z = 'a';
*/
int v[5] = {1,2,3,4,5};
/*
int *ponteiro = NULL;
ponteiro = &x;
float *ponteiro1 = NULL;
ponteiro1 = &y;
char *ponteiro2 = NULL;
ponteiro2 = &z;
*/
for(int i = 0; i<5; i++){
	int *ponteirov = NULL;
    ponteirov = &v[i];
	printf("endereco: %d\nvalor: %d\nvalor apontado: %d\n\n", &ponteirov, ponteirov, *ponteirov);
}
/*
printf("variavel ponteiro >> ");
printf("endereco: %d\nvalor: %d\nvalor apontado: %d\n\n", &ponteiro, ponteiro, *ponteiro);

printf("variavel ponteiro1 >> ");
printf("endereco: %i\nvalor: %i\nvalor apontado: %f\n\n", &ponteiro1, ponteiro1, *ponteiro1);

printf("variavel ponteiro2 >> ");
printf("endereco: %i\nvalor: %i\nvalor apontado: %c\n\n", &ponteiro2, ponteiro2, *ponteiro2);
*/
return 0;
}
