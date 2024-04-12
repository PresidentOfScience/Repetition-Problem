#include <stdio.h>

int main(){
	int N, M, X[100000], Y[100000];
	scanf("%d %d", &N, &M);
	for(int i=0; i<N; i++){
		scanf("%d", &X[i]);
	}
	for(int i=0; i<N; i++){
		if(X[i] >= X[0]) X[0] = X[i];
	}
	for(int i=0; i<M; i++){
		scanf("%d", &Y[i]);
	}
	for(int i=0; i<M; i++){
		if(Y[i] >= Y[0]) Y[0] = Y[i];
	}

	if(X[0] > Y[0]) printf("The dark secret was true\n");
	else printf("Secret debunked\n");
	
	return 0;
}
