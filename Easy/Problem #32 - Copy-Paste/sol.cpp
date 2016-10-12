#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[100000], tmp;
		REPN(i,0,100000) a[i] = 0;
		REPN(i,0,n) {
			scanf("%d", &tmp);
			a[tmp-1] = 1;
		}
		
		int c=0;
		REPN(i,0,100000) {
			if ( a[i]>0 ) ++c;
		}
		
		printf("%d\n", c);
	}
}
