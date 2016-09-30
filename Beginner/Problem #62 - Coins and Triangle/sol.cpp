#include<stdio.h>
#define ulli unsigned long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		ulli n; scanf("%llu", &n);
		
		ulli s=0;
		bool ended = false;
		for ( ulli i=1; !ended; ++i ) {
			if ( n>=i ) {
				n-=i;
				++s;
			} else ended = true;
		}
		
		printf("%llu\n", s);
	}
}
