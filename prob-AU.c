#include <stdio.h>

int main(){
	int T, N;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		printf("Case #%d: ", i+1);
		for(int j=0; j<N; j++){
			printf("%c", 'a'+j);
		}
		puts("");
	}
	
	return 0;
}
