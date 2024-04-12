#include <stdio.h>

int main(){
	long long int T, N, a;
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		long long int sum = 0;
		scanf("%lld", &N);
		for(int j=0; j<N; j++){
			scanf("%lld", &a);
			sum += a;
		}
		printf("Case #%d: %lld\n", i+1, sum);
	}
	
	return 0;
}
