#include<stdio.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
#define REPNRE(i,a,b) for(int i=a; i>=b; --i)
#define modulo 1000000007
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int n, k;
	scanf("%d %d", &n, &k);
	
	int a[n];
	unsigned int b[n];
	REPN(i,0,n) {
		scanf("%d", &a[i]);
		b[i] = -1;
	}
	
	b[n-1] = a[n-1];
	REPNRE(i,n-1,0) {
		for ( int j=i-1; j>=0 && j>=i-k; --j ) {
			int x, y;
			x = b[i];
			y = a[j];
			
			int p = x*y;		
			if ( p<b[j] ) b[j]=p;
		}
	}
	
	printf("%d\n", (b[0]%modulo));
}
