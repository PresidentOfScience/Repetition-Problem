#include <stdio.h>

int main(){
	int T, tc, ts, tv;
	int counter = 0;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		scanf("%d %d %d", &tc, &ts, &tv);
		if(tv < ts) counter += 1;
	}
	printf("%d\n", counter);
	
	return 0;
}
