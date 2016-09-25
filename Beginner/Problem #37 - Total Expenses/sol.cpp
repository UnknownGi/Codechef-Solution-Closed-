#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, k;
		scanf("%d %d", &n, &k);
		
		double prod = n*k;
		if ( n > 1000 ) prod -= (prod*0.1);
		
		printf("%.6f\n", prod);
	}
}
