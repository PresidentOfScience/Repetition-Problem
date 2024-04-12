#include <stdio.h>

int main(){
	int N, K;
	scanf("%d %d", &N, &K);
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			printf("#");
		}
		puts("");
	}
	puts("");
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(i%K == 0) printf("#");
			else printf(".");
		}
		puts("");
	}
	puts("");
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(j%K == 0) printf("#");
			else printf(".");
		}
		puts("");
	}
	
	return 0;
}
