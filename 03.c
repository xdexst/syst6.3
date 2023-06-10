#include <stdio.h>

int main() {
	printf("Test v6.2: OK.\n");
	
	int i;
	double fibonachchi[40],otnosheniya[39],raznosti[38];
	fibonachchi[0] = 1;
	fibonachchi[1] = 1;
	printf("First array:\n");
	printf("%.2lf, %.2lf, ",fibonachchi[0],fibonachchi[1]);
	
	for(i=2;i<40;i++) {
		fibonachchi[i]=fibonachchi[i-1]+fibonachchi[i-2];
		if(i==39) {
			printf("%.2lf", fibonachchi[i]);
		} else {
			printf("%.2lf, ", fibonachchi[i]);
		}
	}
	
	printf("\nSecond array:\n");
	
	for(i=0;i<39;i++) {
		otnosheniya[i]=fibonachchi[i+1]/fibonachchi[i];
		if(i==38) {
			printf("%.7lf", otnosheniya[i]);
		} else {
			printf("%.7lf, ", otnosheniya[i]);
		}
	}
	
	printf("\nThird array:\n");
	
	for(i=0;i<38;i++) {
		raznosti[i]=otnosheniya[i+1]-otnosheniya[i];
		if(i==37) {
			printf("%.10lf", raznosti[i]);
		} else {
			printf("%.10lf, ", raznosti[i]);
		}
	}
	
	printf("\n");
	return 0;
}
