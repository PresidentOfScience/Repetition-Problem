#include <stdio.h>

int main(){
	int N, counter = 0;
	scanf("%d", &N);
	for(int i=0; i<=N+1; i++){
		counter += i;
	}
	printf("%d\n", counter);
	
	return 0;
}
