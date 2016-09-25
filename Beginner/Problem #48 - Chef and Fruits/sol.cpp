#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) { 
		int n, m, k;
		scanf("%d %d %d", &n, &m, &k);
		
		int diff, result;
		if ( n > m ) diff = n-m;
		else diff = m-n;
		
		if ( k >= diff ) result = 0;
		else result = diff-k;
		
		printf("%d\n", result);
	}
}
