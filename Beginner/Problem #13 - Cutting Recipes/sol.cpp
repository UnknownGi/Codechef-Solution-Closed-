#include<stdio.h>
using namespace std;

int gcd (int a, int b) { return b==0? a : gcd(b, a%b); }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n], b[n];
		for ( int i=0; i<n; ++i ) { scanf("%d", &a[i]); b[i] = a[i]; }
		for ( int i=0; i<n-1; ++i ) a[i+1] = gcd(a[i], a[i+1]);
		for ( int i=0; i<n; ++i ) printf("%d ", b[i]/a[n-1]); printf("\n");
	}
}
