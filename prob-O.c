#include <stdio.h>

int main(){
	int T, N, M, K;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int max = 0;
		scanf("%d %d %d", &N, &M, &K);
		for(int j=0; j<=N; j++){
			if(K > max && K <= M) max = K;
			if(j < N) scanf("%d", &K);
		}
		printf("Case #%d: %d\n", i+1, max);
	}
	
	return 0;
}
