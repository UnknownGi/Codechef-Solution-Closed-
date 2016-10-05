#include<stdio.h>
#include<stdlib.h>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int compare ( const void *a, const void *b ) { return *(int*)a-*(int*)b; }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n];
		float avg=0;
		REPN(i,0,n) {
			scanf("%d", &a[i]);
			avg += a[i];
		}
		
		qsort(a, n, sizeof(int), compare);
		
		if ( a[0] == 2 ) printf("No\n");
		else if ( a[n-1] != 5 ) printf("No\n");
		else if ( (avg/n)*1.0 < 4 ) printf("No\n");
		else printf("Yes\n");
	}
}
