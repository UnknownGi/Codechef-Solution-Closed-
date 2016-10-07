#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int a, b, c, d, diff;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		long long int pair=0;
		for ( int x=a; x<=b; ++x ) {
			int y=x+1;
			
			while ( y<c ) ++y;
			
			if ( y<=d && y-x!=0 ) diff=d-y+1;
			else diff = 0;
			
			pair+=diff;
		}
		
		printf("%lld\n", pair);
	}
}
