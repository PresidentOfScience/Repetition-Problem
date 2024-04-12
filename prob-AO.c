#include <stdio.h>

int main(){
	int T, N;
	char S[120];
	scanf("%d", &T);
	
	for(int i=1; i<=T; i++){
		scanf("%d", &N); getchar();
		scanf("%[^\n]", S);
		printf("Case #%d: ", i);
		for(int j=0; j<N; j++){
			if(S[j]>='a' && S[j]<='z') printf("%c", S[j]);
		}
		printf("\n");
	}
	
	return 0;
}
