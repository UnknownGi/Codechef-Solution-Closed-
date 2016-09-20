#include<stdio.h>
#include<utility>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, k;
		scanf("%d %d", &n, &k);
		
		int max=0;
		for ( int i=2; i<=k; ++i ) {
			int profit = n%i;
			if ( profit > max ) max = profit;
		}
		
		printf("%d\n", max);
	}
}
