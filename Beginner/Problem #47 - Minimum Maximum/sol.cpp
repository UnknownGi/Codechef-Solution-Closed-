#include<stdio.h>
#define ulli unsigned long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		ulli n; scanf("%llu", &n);
		
		ulli min = -1;
		for ( int i=0; i<n; ++i ) {
			ulli a; scanf("%llu", &a);
			if ( a < min ) min = a;
		}
		
		ulli ans = (n-1)*min;
		printf("%llu\n", ans);
	}
}
