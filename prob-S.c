#include <stdio.h>

int main(){
	long long int N, P, x, counter = 0;
	scanf("%lld %lld", &N, &P);
	for(int i=1; i<=N; i++){
		scanf("%lld", &x);
		if(x < P) counter++;
	}
	printf("%d\n", counter);
	
	return 0;
}
