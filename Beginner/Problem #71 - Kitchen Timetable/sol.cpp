#include<stdio.h>
#define REP(i,a,b) for(int i=a;i<=b;++i)
#define REPN(i,a,b) for(int i=a;i<b;++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n], b[n], d[n], comp=0;
		REPN(i, 0, n) {
			scanf("%d", &a[i]);
			i==0? d[i]=a[i] : d[i]=a[i]-a[i-1];
		}
		
		REPN(i, 0, n) {
			scanf("%d", &b[i]);
			if ( b[i] <= d[i] ) ++comp;
		}
		
		printf("%d\n", comp);
	}
}
