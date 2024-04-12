#include <stdio.h>

int main(){
	double N, jo, li, bi, x, sum = 0, mean;
	scanf("%lf", &N);
	scanf("%lf %lf %lf", &jo, &li, &bi); getchar();
	for(int i=0; i<N; i++){
		scanf("%lf", &x);
		sum += x;
	}
	mean = (jo+li+bi+sum)/(N+3);
	
	if(jo >= mean) printf("Jojo lolos\n");
	else printf("Jojo tidak lolos\n");
	
	if(li >= mean) printf("Lili lolos\n");
	else printf("Lili tidak lolos\n");
	
	if(bi >= mean) printf("Bibi lolos\n");
	else printf("Bibi tidak lolos\n");
	
	return 0;
}
