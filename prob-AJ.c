#include <stdio.h>

int main(){
	int N, A;
	int total = 0;
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		scanf("%d", &A);
		total += A;
	}
	printf("%d\n", total);
	
	return 0;
}
