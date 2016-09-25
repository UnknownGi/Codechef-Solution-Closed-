#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int test; scanf("%d", &test);
	while ( test-- ) {
		float h, c, t;
		scanf("%f %f %f", &h, &c, &t);
		
		int grade = 5;
		if ( h > 50 && c < 0.7 && t > 5600 ) grade = 10;
		else if ( h > 50 && c < 0.7 && t <= 5600 ) grade = 9;
		else if ( h <= 50 && c < 0.7 && t > 5600 ) grade = 8;
		else if ( h > 50 && c >= 0.7 && t > 5600 ) grade = 7;
		else if ( (h > 50 && c >= 0.7 && t <= 5600) ||
		          (h <= 50 && c < 0.7 && t <= 5600) ||
				  (h <= 50 && c >= 0.7 && t > 5600) ) grade = 6;		
		
		printf("%d\n", grade);
	}
}
