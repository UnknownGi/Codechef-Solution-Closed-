#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, s1, s2;
		scanf("%d %d %d", &n, &s1, &s2);
		
		int indexC=0, indexD=0, in1=0, in2=0;
		int a[s1], b[s2], c[n-s1], d[n-s2];
		for ( int i=0; i<s1; ++i )
			scanf("%d", &a[i]);
		
		for ( int i=0; i<s2; ++i )
			scanf("%d", &b[i]);
		
		for ( int i=1; i<=n; ++i ) {
			if ( i != b[in2] ) {
				d[indexD] = i;
				++indexD;
			} else ++in2;
			
			if ( i != a[in1] ) {
				c[indexC] = i;
				++indexC;
			} else ++in1;
		}
		
		int common = 0;
		for ( int i=0; i<s1; ++i ) {
			for ( int j=0; j<s2; ++j ) {
				if ( a[i] == b[j] ) ++common;
			}
		}
		
		int commonC = 0;
		for ( int i=0; i<n-s1; ++i ) {
			for ( int j=0; j<n-s2; ++j ) {
				if ( c[i] == d[j] ) ++commonC;
			}
		}
		
		printf("%d %d\n", common, commonC);
	}
}
