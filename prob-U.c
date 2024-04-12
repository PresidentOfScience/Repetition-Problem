#include <stdio.h>

int main(){
	long long int T, N;
	char S[120];
	scanf("%lld", &T);
	for(int i=0; i<T; i++){
		long long int Lcounter = 0, Bcounter = 0, Tcounter = 0;
		scanf("%lld", &N);
		scanf("%s", S); getchar();
		for(int j=0; j<N; j++){
			if(S[j] == 'L') Lcounter++;
			else if(S[j] == 'B') Bcounter++;
			else Tcounter++;
		}
		if(Lcounter > Bcounter) printf("Lili\n");
		else if(Lcounter < Bcounter) printf("Bibi\n");
		else printf("None\n");
	}
	
	return 0;
}
