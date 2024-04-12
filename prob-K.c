#include <stdio.h>

int main(){
	int T, N;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &N);
		printf("Case #%d:\n", i+1);
		for(int j=0; j<N; j++){
			for(int k=0; k<N-1-j; k++){
				printf(" ");
			}
			for(int k=0; k<j+1; k++){
				if(N%2 == 0){
					if(k%2 == 0) printf("#");
					else printf("*");
				}
				else{
					if(k%2 == 0) printf("*");
					else printf("#");
				}
			}
			puts("");
		}
	}
	
	return 0;
}
