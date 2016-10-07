#include<stdio.h>
#define llu unsigned long long int
#define MOD 1000000007
using namespace std;

llu s;
void solve ( int start, int end, int sum, llu *a, int index, int n ) {
	++index;
	if ( index < n+1 ) {
		solve(start, a[index], sum+(start*a[index]), a, index, n);
		solve(a[index], end, sum+(end*a[index]), a, index, n);
	} else { s+=sum; s=s%MOD; }
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		llu a[n+1];
		for ( int i=0; i<n+1; ++i ) scanf("%llu", &a[i]);
		
		s=0;
		solve(a[0], a[0], s, a, 0, n);
		printf("%llu\n", s);
	}
}
