#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#define REPN(i,a,b) for(int i=a; i<b; ++i) 
#define lld long long int 
using namespace std;

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		lld N, K, E, M;
		scanf("%lld %lld %lld %lld", &N, &K, &E, &M);
		
		lld s[N-1], my=0, tmp;
		REPN(i,0,N-1) {
			lld score=0;
			REPN(j, 0, E) {
				scanf("%lld", &tmp);
				score += tmp;
			}
			
			s[i] = score;
		}
		
		sort(s, s+(N-1));
		reverse(s, s+(N-1));
		
		REPN(i,0,E-1) {
			scanf("%lld", &tmp);
			my += tmp;
		}
		
		lld diff = s[K-1]-my;
		if ( diff<0 ) printf("0\n");
		else diff<M? printf("%lld\n", (diff+1)) : printf("Impossible\n");
		
	}
}
