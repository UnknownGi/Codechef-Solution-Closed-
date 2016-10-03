#include<stdio.h>
#include<stdlib.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
#define REP(i,a,b) for(int i=a; i<=b; ++i)
using namespace std;

int compare ( const void *a, const void *b ) { return *(int*)b-*(int*)a; }

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n];
		REPN(i,0,n) scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), compare);
		
		int l,b,s=0,j=0;
		while (s!=2 && j<n) {
			if(a[j]==a[j+1]) {
				if(s==0) { l=a[j]; ++s; }
				else { b=a[j]; ++s; }
				
				j+=2;
			} else ++j;
		}
		
		if ( s==2 ) printf("%d\n", (l*b));
		else printf("-1\n");
	}
}
