#include<stdio.h>
#include<algorithm>
#define lld long long int 
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		lld n, m; scanf("%lld", &n);
		
		lld a[n];
		REPN(i,0,n) scanf("%lld", &a[i]);
	
		scanf("%d", &m);
		
		m = a[m-1];
		sort(a, a+n);
	
		REPN(i,0,n) {
			if ( m==a[i] ) {
				printf("%d\n", i+1);
				break;
			} 
		}
	}
}
