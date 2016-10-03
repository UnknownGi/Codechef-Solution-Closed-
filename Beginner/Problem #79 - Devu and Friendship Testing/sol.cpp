#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[100], tmp, c=0;
		REPN(i,0,100) a[i]=0;
		
		REPN(i,0,n) {
			scanf("%d", &tmp);
			++a[tmp-1];
		}
		
		REPN(i,0,100) {
			if ( a[i]>0 ) ++c;
		}
		
		printf("%d\n", c);
	}
}
