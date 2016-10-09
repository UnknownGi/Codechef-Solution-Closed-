#include<stdio.h>
#define lld long long int 
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int G; scanf("%d", &G);
		
		while ( G-- ) {
			int I, Q; lld N, h, t;
			scanf("%d %lld %d", &I, &N, &Q);
			
			if ( N%2==0 ) { h=N/2; t=N/2; }
			else {
				if ( I==1 ) {
					h=N/2; 
					t=(N/2)+1;
				} else {
					h=(N/2)+1; 
					t=N/2;
				}
			}
			
			Q==1? printf("%lld\n", h) : printf("%lld\n", t);
		}
	}
}
