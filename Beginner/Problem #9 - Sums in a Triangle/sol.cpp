#include<vector>
#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int max = 0;
		int a[n][n];
		for ( int i=0; i<n; ++i ) {
			for ( int j=0; j<i+1; ++j ) {
				a[i][j] = 0; scanf("%d", &a[i][j]);
				
				if ( i>=1 ) {
					if ( j==0 ) a[i][j] += a[i-1][j];
					else if ( j==i ) a[i][j] += a[i-1][j-1];
					else if ( a[i][j]+a[i-1][j] > a[i][j]+a[i-1][j-1] ) a[i][j] += a[i-1][j];	
					else a[i][j] += a[i-1][j-1];
					
					if ( a[i][j] > max ) max = a[i][j];
				}
			}
		}
		
		if ( n==1 ) max = a[0][0]; 
		printf("%d\n", max);
	}
}
