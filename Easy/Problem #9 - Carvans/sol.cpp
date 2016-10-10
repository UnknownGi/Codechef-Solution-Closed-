#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n], max, count=0;
		REPN(i,0,n) {
			scanf("%d", &a[i]);
			
			if ( i==0 ) { ++count; max=a[i]; }
			else if ( a[i]<max ) { ++count; max=a[i]; }
		}
		
		printf("%d\n", count);
	}
}
