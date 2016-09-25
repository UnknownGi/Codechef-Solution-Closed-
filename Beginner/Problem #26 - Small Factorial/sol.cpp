#include<stdio.h>
#define ulli unsigned long long int
using namespace std;


int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		ulli fact = n;
		for ( int i=2; i<n; ++i ) fact *= i;
		
		if ( n == 0 ) fact = 1;
		printf("%llu\n", fact);
	}
}
