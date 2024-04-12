#include <stdio.h>

int main(){
	long long int T, X, P, bin[120];
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		long long int counter = 0;
		scanf("%lld %lld", &X, &P);
		while(X > 1){
			bin[counter] = X%2;
			counter++;
			X /= 2;
		}
		if(X == 0 || X == 1) bin[counter] = X;
		printf("%lld\n", bin[P]);
	}
	
	return 0;
}
