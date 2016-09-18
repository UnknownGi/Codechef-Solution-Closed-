#include<math.h>
#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		int c = (a*a)+(b*b);
		float d = sqrt(c);
		
		int e = (b*b)-(a*a);
		float f = sqrt(e);
		
		printf("%.4f %.4f\n", f, d);		
	}
}
