#include<stdio.h>
#define lld long long int
using namespace std;

int main ( ) {
	// freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		lld n, k;
		scanf("%lld %lld", &n, &k);
		
		k!=0? printf("%lld %lld\n", (n/k), (n%k)) : printf("0 %lld\n", n);
	}
}
