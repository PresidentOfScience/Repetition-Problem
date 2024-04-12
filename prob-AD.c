#include <stdio.h>

int main(){
	int N, A[1200], B[1200] = {0}, max;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &A[i]);
		B[A[i]]++;
	}
	max = B[A[0]];
	for(int i=0; i<N; i++){
		if(B[A[i]] > max) max = B[A[i]];
	}
	printf("%d\n", max);
	
	return 0;
}
