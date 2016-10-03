#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int collision ( int a ) {
	if ( a<1 ) return 0;
	
	int s=1;
	for ( int i=2; i<=a; ++i ) s+=a;
	return s;	
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, m;
		scanf("%d %d", &n, &m);
		
		int s=0, a[n][m];
		REPN(i,0,n) {
			int c=0;
			REPN(j,0,m) {
				scanf("%1d", &a[i][j]);
				if ( a[i][j]==1 ) ++c;
			} 
			
			s += collision(c-1);
		}
		
		printf("%d\n", s);
	}
}
