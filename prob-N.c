#include <stdio.h>

int main(){
	long int T, A, B;
	scanf("%ld", &T);
	for(int i=0; i<T; i++){
		scanf("%ld %ld", &A, &B);
		long int counter = A;
		while(A >= B){
			A -= B;
			A++;
			counter++;
		}
		printf("Case #%d: %ld\n", i+1, counter);
	}
}
