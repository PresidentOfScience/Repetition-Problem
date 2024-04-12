#include <stdio.h>

int main(){
	int T, pcs;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		int b = 1;
		scanf("%d", &pcs);
		printf("Case %d:", i);
		for(int j=1; j<=pcs; j++){
			printf(" %d", b);
			b += j;
		}
		printf("\n");
	}
	
	return 0;
}
