#include<stdio.h>
#include<stdlib.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i) 
using namespace std;

int compare ( const void *a, const void *b ) { return *(int*)a-*(int*)b; }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, k;
		scanf("%d %d", &n, &k);
		
		int a[n];
		REPN(i, 0, n) scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), compare);
		
		float avg=0;
		REPN(i, k, n-k) avg += a[i];
		
		printf("%.6f\n", (avg/(n-(k+k)))); 
	}
}
