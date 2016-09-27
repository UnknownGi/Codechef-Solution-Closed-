#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, m;
		scanf("%d", &n);
		
		int a[n];
		for ( int i=0; i<n; ++i ) scanf("%d", &a[i]);
		
		scanf("%d", &m);
		
		int b[m];
		for ( int i=0; i<m; ++i ) scanf("%d", &b[i]);
		
		
		int match=0, k=0, j=0;
		for ( int i=0; i<n; ++i ) {
			k=i;
			while ( j<m && a[k]==b[j] ) {
				++j;
				++k;
			} 
			
			if ( j==m ) break;
		}
		
		j==m? printf("Yes\n") : printf("No\n");
	}
}
