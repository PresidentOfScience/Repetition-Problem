#include <stdio.h>

int main(){
	int N, count = 0;
	int Ai[1200], step[1200];
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%d", &Ai[i]);
	}
	for(int i=0; i<N; i++){
		if(i != 0){
			if(Ai[i] == 1){
				step[count] = Ai[i-1];
				count++;
			}
			if(i == N-1){
				step[count] = Ai[i];
				count++;
			}
		}
	}
	for(int i=0; i<count; i++){
		printf("%d", step[i]);
		if(i < count-1){
			printf(" ");
		}
	}
	puts("");
	
	return 0;
}
