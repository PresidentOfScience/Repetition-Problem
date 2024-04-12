#include <stdio.h>

int main(){
	int T, N, K;
	char S[120];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int temp;
		scanf("%d %d", &N, &K); getchar();
		scanf("%s", S); getchar();
		printf("Case #%d: ", i+1);
		for(int j=0; j<N; j++){
			temp = S[j] - 97 + K;
			if(temp > 25){
				temp %= 26;
			}
			temp += 97;
			printf("%c", temp);
		}
		puts("");
	}
	
	return 0;
}
