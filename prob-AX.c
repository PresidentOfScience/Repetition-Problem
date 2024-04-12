#include <stdio.h>

int main(){
	long long int N, A, max = 0;
	scanf("%lld", &N);
	for(int i=0; i<N; i++){
		scanf("%lld", &A);
		if(A < 0) A = 0;
		max += A;
	}
	printf("%lld\n", max);
	
	return 0;
}
