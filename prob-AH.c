#include <stdio.h>
#include <string.h>

int main(){
	char num[10000];
	int T, N, length;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		scanf("%s", num);
		length = strlen(num);
		printf("Case #%d: %d\n", i, length);
	}
	
	return 0;
}
