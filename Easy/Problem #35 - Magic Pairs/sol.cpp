#include<stdio.h>
#define lld long long int
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

lld add ( lld x ) {
	if ( x==0 ) return 0;
	else return x + add(x-1);
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		lld tmp, n; scanf("%lld", &n);
		
		REPN(i,0,n) scanf("%lld", &tmp);
		
		printf("%lld\n", add(n-1));
	}
}
