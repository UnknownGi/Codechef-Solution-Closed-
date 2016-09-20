#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int c = 0;
		while ( n>=100 ) { n-=100; ++c; }
		while ( n>=50 ) { n-=50; ++c; }
		while ( n>=10 ) { n-=10; ++c; }
		while ( n>=5 ) { n-=5; ++c; }
		while ( n>=2 ) { n-=2; ++c; }
		while ( n>=1 ) { n-=1; ++c; }
		
		printf("%d\n", c);
	}
}
