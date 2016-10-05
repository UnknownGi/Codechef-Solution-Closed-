#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, k; 
		scanf("%d %d", &n, &k);
		
		int tmp, a[n], c=0;
		REPN(i,0,n) a[i]=0;
		REPN(i,0,n) {
			scanf("%d", &tmp);
			if ( tmp-1 != i ) ++a[tmp-1];
			else a[i]=-1000;
		}
		
		REPN(i,0,n) {
			if(a[i]>=k) ++c;
		}
		
		printf("%d\n", c);
	}
}
