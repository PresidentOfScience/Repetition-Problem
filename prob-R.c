#include <stdio.h>

int main(){
	int T, N, minimum, min[1200], A[1200];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &A[j]);
			if(j > 0){
				if(A[j]-A[j-1] >= 0) min[j-1] = A[j] - A[j-1];
				else min[j-1] = A[j-1] - A[j];
			}
		}
		for(int j=0; j<N-1; j++){
			if(j == 0) minimum = min[j];
			if(j > 0){
				if(min[j] < minimum) minimum = min[j];
			}
		}
		printf("Case #%d: %d\n", i+1, minimum);
	}
	
	return 0;
}
