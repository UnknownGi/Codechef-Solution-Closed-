#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int m, x, y; 
		scanf("%d %d %d", &m, &x, &y);
		
		int a[m];
		for ( int i=0; i<m; ++i ) scanf("%d", &a[i]);
		
		int z[100];
		for ( int i=0; i<100; ++i ) z[i] = 0;
		
		for ( int i=0; i<m; ++i ) {
			int s = a[i]-(x*y)-1;
			int e = a[i]+(x*y)-1;
			
			if ( s < 0 ) s = 0;
			if ( e >= 100 ) e = 99;
			for ( int j=s; j<=e; ++j ) {
				z[j] = 1;
			}
		}
		
		int c = 0;
		for ( int i=0; i<100; ++i ) {
			if ( z[i] == 0 ) ++c;
		} 
		
		printf("%d\n", c);
	}
}
