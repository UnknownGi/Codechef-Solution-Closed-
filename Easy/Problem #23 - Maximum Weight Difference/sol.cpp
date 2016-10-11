#include<stdio.h>
#include<algorithm>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int ABS ( int x ) { return x>=0? x : x*-1; }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, k;
		scanf("%d %d", &n, &k);
		
		if ( k>n/2 ) k=n-k;
		
		int a[n], child=0, chef=0;
		REPN(i,0,n) scanf("%d", &a[i]);
		
		sort(a, a+n);
		
		REPN(i,0,n) {
			if ( i<k ) child += a[i];
			else chef += a[i];
		}
		
		printf("%d\n", ABS(chef-child));
	}
}
