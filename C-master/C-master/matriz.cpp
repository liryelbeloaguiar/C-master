 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 int main(){
 	srand(time(NULL))
; 	//int N = 3; //então eu posso trocar int A[3][3] por int A[N][N];
 	/*int A[3][3] = {{1, 4,10}, 
	               {2, 6, 5},
				   {1,-1, 0}};*/
	int A[3][3];
	int sDp = 0, sDs = 0;	
	for(int i = 0; i<3; i++){
 		for(int j = 0; j<3; j++){
 			A[i][j] = rand()%20; // 0 a 19
 			//scanf("%d", A[i][j]); //para informar minha matriz;
			}}   
 	for(int i = 0; i<3; i++){
 		for(int j = 0; j<3; j++){
 			printf("%d", A[i][j]);
 			putchar(' ');
 			putchar('|');
 			if(i==j) sDp += A[i][j];
			if(i+j==3-1) sDs += A[i][j];
		 }
		 putchar('\n');
	 }
	 putchar('\n');
	 printf("sDp: %d\n", sDp);
	 printf("sDs: %d\n", sDs);
 	return 0;
 }
