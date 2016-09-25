#include<stdio.h>
#include<stdlib.h>
using namespace std;

int compare ( const void *a, const void *b ) { return *(int*)a-*(int*)b; }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int a[n];
		for ( int i=0; i<n; ++i ) scanf("%d", &a[i]);
		
		qsort(a, n, sizeof(int), compare);
		
		for ( int i=0; i<n; i+=2 ) {
			if ( a[i] != a[i+1] ) {
				printf("%d\n", a[i]);
				break;
			}
		}
	}
}
