#include <stdio.h>

int main(){
    long long int T, N, arr[100000], x, sum;
    scanf("%lld", &T);
	for(int i=0; i<T; i++){
        scanf("%lld", &N);
        x = 0;
        sum = 0;
        for(int j=0; j<N; j++){
            scanf("%lld", &arr[j]);
        	sum += arr[j];
        }
        for(int j=0; j<N-1; j++){
            x += arr[j];
            if(x == (sum-x)){
            	printf("Case #%d: Yes\n", i+1);
				break;
    		}
   		}
    	if (x != (sum-x)){
        	printf("Case #%d: No\n", i+1);
    	}
    }

	return 0;
}
