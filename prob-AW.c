#include <stdio.h>

int main(){
	int T, N, max, A[1200];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int counter = 0;
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &A[j]);
			if(j == 0) max = A[j];
			if(j > 0){
				if(A[j] > max) max = A[j];
			}
		}
		for(int j=0; j<N; j++){
			if(A[j] == max){
				counter++;
			}
		}
		printf("Case #%d: %d\n", i+1, counter);
	}
	
	return 0;
}
