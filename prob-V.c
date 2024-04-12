#include <stdio.h>

int main(){
	int T, N;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			if(j == 0 || j == N-1){
				for(int k=0; k<N; k++) printf("*");
			}
			else{
				if(j < N/2){
					printf("*");
					for(int k=0; k<j-1; k++) printf(" ");
					printf("*");
					for(int k=0; k<N-2-2*j; k++) printf(" ");
					printf("*");
					for(int k=0; k<j-1; k++) printf(" ");
					printf("*");
				}
				else if(j == N/2){
					printf("*");
					for(int k=0; k<N/2-1; k++) printf(" ");
					printf("*");
					for(int k=0; k<N/2-1; k++) printf(" ");
					printf("*");
				}
				else{
					printf("*");
					for(int k=0; k<N-j-2; k++) printf(" ");
					printf("*");
					for(int k=0; k<2*j-N; k++) printf(" ");
					printf("*");
					for(int k=0; k<N-j-2; k++) printf(" ");
					printf("*");
				}
			}
			puts("");
		}
		puts("");
	}
	
	return 0;
}
