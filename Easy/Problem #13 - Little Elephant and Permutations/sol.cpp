#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n];
		REPN(i,0,n) scanf("%d", &a[i]);
		
		int local=0, inv=0;
		REPN(i,0,n) {
			if ( i+1 < n && a[i] > a[i+1] ) ++local;
			REPN(j,0,n) {
				if ( i!=j && i<j && a[i]>a[j] ) ++inv;
			}
		}
		
		local==inv? printf("YES\n") : printf("NO\n");
	}
}
