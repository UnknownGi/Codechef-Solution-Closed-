#include<stdio.h>
#define llu unsigned long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		llu n, k;
		scanf("%llu %llu", &n, &k);
		
		llu temp, base=0;
		for ( int i=0; i<n; ++i ) {
			scanf("%llu", &temp);
			base += temp;
		} ++base;
		
		llu sum=0;
		for ( llu i=1; i<=k; ++i ) {
			sum += base;
			base = sum;
		}
		
		sum%2==0? printf("even\n") : printf("odd\n");
	}
}
