#include <stdio.h>

int main(){
	int T, N;
	char S[120], K[120];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int counter = 0, score = 0;
		scanf("%d", &N);
		scanf("%s", S);
		scanf("%s", K);
		for(int j=0; j<N; j++){
			if(S[j] == K[j]) counter++;
		}
		score = counter*100/N;
		printf("Case #%d: %d\n", i+1, score);
	}
	
	return 0;
}
