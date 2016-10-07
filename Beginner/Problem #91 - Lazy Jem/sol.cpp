#include<stdio.h>
#define llu unsigned long long int
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		llu N, B, M;
		scanf("%llu %llu %llu", &N, &B, &M);
		
		llu m=0, s;
		while ( N != 0 ) {
			N%2==0? s=N/2 : s=(N+1)/2;
			
			m += (s*M);
			M *= 2;
			N -= s;
			if ( N!=0 ) m += B;
		}
		
		printf("%llu\n", m);
	}
}
