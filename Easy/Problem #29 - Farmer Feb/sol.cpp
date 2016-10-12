#include<math.h>
#include<stdio.h>
using namespace std;

bool ifPrime ( int x ) {
	for ( int i=3; i<=sqrt(x); i+=2 ) {
		if ( x%i==0 ) return false;
	} return true;
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		int p;
		bool found = false;
		for ( int i=(a+b+1); !found; ++i ) {
			if ( i%2==0 ) continue;
			else if ( ifPrime(i) ) { p=i; found=true; }
		}
		
		printf("%d\n", (p-a-b));
	}
}
