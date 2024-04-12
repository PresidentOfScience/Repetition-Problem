#include <stdio.h>

int main(){
	int T, N, A[120];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		for(int j=0; j<N; j++){
			scanf("%d", &A[j]);
		}
		int temp = 0;
		int result = 0;
		int count = 0;
		for(int j=0; j<N-1; j++){
			for(int k=j+1; k<N; k++){
				count++;
				temp = A[j]^A[k];
				int bit1 = 0;
				while(temp > 0){
					int temp2 = temp % 2;
					temp /= 2;
					if(temp2 == 1) bit1++;
					if(bit1 == 3){
						result++;
						break;
					}
				}
			}
		}
		printf("Case #%d: %d %d\n", i+1, result, count-result);
	}
	
	return 0;
}
