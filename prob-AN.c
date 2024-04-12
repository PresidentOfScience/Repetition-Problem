#include <stdio.h>

int main(){
	int T, A, B, C, D, E, F;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);
		printf("Case #%d: ", i);
		for(int j=1; j<=A; j++) printf("a");
		for(int j=1; j<=B; j++) printf("s");
		for(int j=1; j<=C; j++) printf("h");
		for(int j=1; j<=D; j++) printf("i");
		for(int j=1; j<=E; j++) printf("a");
		for(int j=1; j<=F; j++) printf("p");
		printf("\n");
	}
	
	return 0;
}
