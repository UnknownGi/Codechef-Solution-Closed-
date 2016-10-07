#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int tmp, n; scanf("%d", &n);
	
	int a[n+1];
	REPN(i,0,n+1) a[i]=0;
	
	REPN(i,0,n) {
		scanf("%d", &tmp);
		a[tmp]++;
	}
	
	REPN(i,0,n+1) {
		if ( a[i]==0 ) printf("%d ", i);
	} printf("\n");
}
