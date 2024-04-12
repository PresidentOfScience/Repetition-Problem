#include <stdio.h>

int main(){
	long int N, step;
	long int total = 0;
	scanf("%ld", &N);
	for(int i=1; i<=N; i++){
		scanf("%ld", &step);
		total += step;
		if(total == 9) total = 21;
		if(total == 33) total = 42;
		if(total == 76) total = 92;
		if(total == 53) total = 37;
		if(total == 80) total = 59;
		if(total == 97) total = 88;
		if(total > 99) total = (total/100)*100 + (total%100);
	}
	printf("%ld\n", total);
	
	return 0;
}
