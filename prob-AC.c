#include <stdio.h>

int main(){
	long long int T, M, N, x;
	scanf("%lld", &T);
	for(int i=1; i<=T; i++){
	long long int min = 1000001;
		scanf("%lld %lld", &N, &M);
		for(int j=1; j<=N; j++){
			scanf("%lld", &x);
			if(x<min) min = x;
		}
		printf("Case #%d: %lld\n", i, M/min);
	}
	
	return 0;
}
