#include<stdio.h>
using namespace std;

#define ulli unsigned long long int
#define MIN(a,b) a<b? a : b

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		ulli n, k;
		scanf("%llu %llu", &n, &k);
		
		ulli s=0, z;
		for ( int i=0; i<n; ++i ) {
			scanf("%llu", &z);
				
			z<k? s += (k-z) : s += MIN(z%k, k-(z%k));
		}
		
		printf("%llu\n", s);
	}
}
