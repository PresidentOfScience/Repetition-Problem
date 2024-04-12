#include <stdio.h>

int main(){
	int T, K;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int sum = 0, counter = 0;
		scanf("%d", &K);
		while(sum < K){
			counter++;
			sum += counter;
		}
		printf("Case #%d: %d\n", i+1, counter);
	}
	
	return 0;
}
