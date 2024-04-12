#include <stdio.h>

int main(){
	int T;
	double R, H, Y;
	scanf("%d", &T);
	for(int i=1; i<=T; i++){
		Y = 0;
		scanf("%lf %lf", &R, &H);
		Y = 2*3.14*R*(R+H);
		printf("Case #%d: %.2lf\n", i, Y);
	}
	
	return 0;
}
