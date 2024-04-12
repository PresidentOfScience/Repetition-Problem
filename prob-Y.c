#include <stdio.h>

int main(){
	int T, N, M;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		scanf("%d %d", &N, &M);
		printf("Case #%d:\n", i);
		for(int j=1; j<=N; j++){
			if(j==1 || j==N){
				for(int k=1; k<=M; k++) printf("#");
			}
			else{
				printf("#");
				for(int k=1; k<=M-2; k++) printf(" ");
				printf("#");
			}
		printf("\n");
		}
	}
	
	return 0;
}
