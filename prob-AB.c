#include <stdio.h>

int main(){
	int T, N, A, B, C, D;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		int num = 1;
		int counter = 0;
		scanf("%d %d %d %d %d", &N, &A, &B, &C, &D);
		for(int j=1; j<=N; j++){
			if(num%A==0 || num%B==0 || num%C==0 || num%D==0){
				counter++;
			}
			else counter += 0;
			num++;
		}
		printf("Case #%d: %d\n", i+1, counter);
	}
	
	return 0;
}
