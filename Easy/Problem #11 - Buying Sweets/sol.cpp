#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, p;
		scanf("%d %d", &n, &p);
		
		int a[n], sum=0;
		REPN(i,0,n) {
			scanf("%d", &a[i]);
			sum += a[i];
		}
		
		bool f = true;
		int rem = sum%p;
		REPN(i,0,n) {
			if ( a[i]<=rem ) {
				f=false;
				break;
			}
		}
		
		f? printf("%d\n", (sum/p)) : printf("-1\n");
	}
}
