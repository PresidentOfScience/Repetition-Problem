#include <stdio.h>

int main(){
	int Q, N = 0; 
	scanf("%d", &Q);
	for(int i=1; i<=Q+1; i++){
		N = (2*N)+1;
	}
	printf("%d\n", N);
	
	return 0;
}
