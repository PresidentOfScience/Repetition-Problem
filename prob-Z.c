#include <stdio.h>

int main(){
	int N, step;
	int total = 0;
	scanf("%d", &N);
	for(int i=1; i<=N; i++){
		scanf("%d", &step);
		total += step;
		if(total == 12) total = 28;
		if(total == 35) total = 7;
		if(total == 30) total = 10;
		if(total > 39) total = total%40;
	}
	printf("%d\n", total);
	
	return 0;
}
