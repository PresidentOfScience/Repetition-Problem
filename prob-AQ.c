#include <stdio.h>

int main(){
	int T;
	char S[120];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%s", S); getchar();
		int dotCounter = 0;
		int numCounter = 0;
		for(int j=0; S[j] != '\0'; j++){
			if(j == 0 && S[j] >= '0' && S[j] <= '9') numCounter++;
			else if(S[j] == '.'){
				dotCounter++;
				if(S[j+1] >= '0' && S[j] <= '9') numCounter++;
			}
		}
		if(dotCounter == 5 && numCounter == 6) printf("Case #%d: YES\n", i+1);
		else printf("Case #%d: NO\n", i+1);
	}
	
	return 0;
}
