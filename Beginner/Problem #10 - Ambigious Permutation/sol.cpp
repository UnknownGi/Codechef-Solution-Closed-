#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	while ( true ) {
		int n; scanf("%d", &n);
		
		if ( n==0 ) break;
		
		int a[n], b[n];
		for ( int i=0; i<n; ++i ) {
			scanf("%d", &a[i]);
			b[a[i]-1] = i+1;
		}
		
		bool found = true;
		for ( int i=0; i<n && found; ++i ) {
			if ( a[i] != b[i] ) found = false;
		}
		
		if ( !found ) printf("not ambiguous\n");
		else printf("ambiguous\n");
	}
}
