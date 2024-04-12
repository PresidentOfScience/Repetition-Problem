#include <stdio.h>

int main(){
	int T, N, M, Hrg;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		scanf("%d %d", &N, &M);
		int total = 0;
		for(int j=1; j<=N; j++){
			scanf("%d", &Hrg);
			total += Hrg;
		}
		if(total > M) printf("Case #%d: Wash dishes\n", i);
		else printf("Case #%d: No worries\n", i);
	}
	
	return 0;
}
