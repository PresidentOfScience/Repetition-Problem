#include <stdio.h>

int main(){
	long int T, N, X, minFlip;
	scanf("%ld", &T);
	for(int i=0; i<T; i++){
		scanf("%ld %ld", &N, &X);
		if(N%2 == 0) N++;
		if(X <= N-X) minFlip = X/2;
		else if(X > N-X) minFlip = (N-X)/2;
		printf("Case #%d: %ld\n", i+1, minFlip);
	}
	
	return 0;
}
