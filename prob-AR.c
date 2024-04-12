#include <stdio.h>

int main(){
	int M, N;
	scanf("%d %d", &M, &N);
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			for(int k=0; k<N-j-1; k++){
				printf(" ");
			}
			for(int k=0; k<j+1; k++){
				printf("*");
			}
			puts("");
		}
	}
	
	return 0;
}
