#include <stdio.h>

int main(){
	int T, X;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d", &X);
		for(int j=0; j<X; j++){
			for(int k=0; k<X-1-j; k++){
				printf(" ");
			}
			for(int k=0; k<2*j+1; k++){
				printf("*");
			}
			puts("");
		}
	}
	
	return 0;
}
