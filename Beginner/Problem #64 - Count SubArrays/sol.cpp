#include<vector>
#include<stdio.h>
#define ulli unsigned long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		ulli a[n], b[n];
		for ( int i=0; i<n; ++i ) {
			scanf("%llu", &a[i]);
			b[i] = 1;
		}
		
		ulli sum=0;
		for ( int i=0; i<n; ++i ) {
			if ( i==0 ) sum+=b[i];
			else {
				if ( a[i] >= a[i-1] ) {
					b[i] = b[i-1]+1;
					sum += b[i];
				} else {
					b[i] = 1;
					sum += b[i];
				}
			}
		}
		
		printf("%llu\n", sum);
	}
}
