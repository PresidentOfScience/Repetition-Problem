#include <stdio.h>

int main(){
	int T, N, A;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int evenCounter = 0, oddCounter = 0;
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &A);
			if(A%2 == 1) oddCounter++;
			else evenCounter++;
		}
		printf("Odd group : %d integer(s).\n", oddCounter);
		printf("Even group : %d integer(s).\n", evenCounter);
		puts("");
	}
	
	return 0;
}
