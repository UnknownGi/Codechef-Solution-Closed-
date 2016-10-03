#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n], one=0, c=0;
		REPN(i,0,n) {
			scanf("%d", &a[i]);
			if ( a[i]==1 ) one++;
		}
		
		
		REPN(i,0,n) {
			if (a[i]==1 && one%2!=0) ++c;
			else if (a[i]==0 && one%2==0) ++c;
		}
		
		printf("%d\n", c);
	}
}
