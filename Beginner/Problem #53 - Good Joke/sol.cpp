#include<math.h>
#include<vector>
#include<stdio.h>
#include<utility>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) { 
		int n; scanf("%d", &n);
		
		for ( int i=0; i<n; ++i ) {
			int a, b;
			scanf("%d %d", &a, &b);
		}
		
		int ans=0;
		for ( int i=1; i<=n; ++i ) ans ^= i;
		
		printf("%d\n", ans);
	}		
}
