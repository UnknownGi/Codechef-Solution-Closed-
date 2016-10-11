#include<math.h>
#include<stdio.h>
#define REPNE(i,a,b) for(int i=a; i<=b; ++i)
using namespace std;

int ABS ( int x ) {
	return x>=0? x : x*-1;
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		unsigned int min = -1;
		REPNE(i,1,sqrt(n)) {
			if ( n%i==0 && ABS((n/i)-i)<min ) min = ABS((n/i)-i);
		}
		
		printf("%u\n", min);
	}
}
