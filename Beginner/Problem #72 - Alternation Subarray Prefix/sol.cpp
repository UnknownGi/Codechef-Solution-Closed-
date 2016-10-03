#include<stdio.h>
#define REP(i,a,b) for(int i=a; i<=b; ++i)
#define REPN(i,a,b) for(int i=a; i<b; ++i)
#define lli long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		lli a[n], b[n];
		REPN(i, 0, n) scanf("%lld", &a[i]);
		
		b[n] = 1;
		for( int i=n-1; i>=0; --i ) {
			if ( (a[i]>0 && a[i+1]<0) || (a[i]<0 && a[i+1]>0) )
				b[i] = b[i+1]+1;
			else b[i]=1;
			
			if ( i==n-1 ) b[i]=1;
		}
		
		REPN(i,0,n) printf("%lli ", b[i]); printf("\n");
	}
}
