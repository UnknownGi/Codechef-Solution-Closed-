#include<stdio.h>
#include<algorithm>
#define lld long long int
#define llu unsigned long long int 
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		lld a[n];
		REPN(i,0,n) scanf("%lld", &a[i]);
		sort(a, a+n);
		
		llu min = -1;
		for ( int i=1; i<n; ++i ) {
			if ( (a[i]-a[i-1])<min ) min=a[i]-a[i-1];
		}
		
		printf("%llu\n", min);
	}
}			
