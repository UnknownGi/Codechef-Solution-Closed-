#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int gcd ( int a, int b ) { return b==0? a : gcd(b, a%b); }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n];
		REPN(i,0,n) {
			scanf("%d", &a[i]);
			if ( i>=1 ) a[i] = gcd(a[i], a[i-1]);
		}
		
		printf("%d\n", a[n-1]);
	}
}
