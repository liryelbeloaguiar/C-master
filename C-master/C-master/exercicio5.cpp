#include <stdio.h>
#include <math.h>

int main(){
	float x, y, z, ma, mg, mp;
	int  op;
	do{
	printf("digite tres valores inteiros\n");
	scanf("%f %f %f", &x, &y, &z);
	printf("voce deseja:\n1-verificar o maior\n2-verificar o menor\n3-media aritimetica\n4-media geometrica\n5-media ponderada\n6-sair\n");//com pesos 4,5 e 6
	scanf("%d", &op);
	switch(op){
		case 1:
			if(x > y && x > z){
				printf("x eh o maior\n");
			}else if(y > x && y > z){
				printf("y eh o maior\n");
			}else
			    printf("z eh o maior\n");
		break;
		case 2:
			if(x < y && x < z){
				printf("x eh o menor\n");
			}else if(y < x && y <z){
				printf("y eh o menor\n");
			}else
			    printf("z eh o menor\n");
		break;
		case 3:
			ma = (x + y + z) / 3;
			printf("%.2f\n", ma);
		break;
		case 4:
		    mg = cbrt(x * y * z);	
		    printf("%.2f\n", mg);
		break;
		case 5:
			mp =( 4 * x + 5 * y+ 6 * z)/(x + y+z)
			printf("%.2f\n", mp);
		break;
		case 6:
			printf("opcao de saida precione enter\n");
		default:
			printf("opcao invalida");
	
	}
}while(op != 6);
	return 0;
}
