#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		int c = 0;
		for ( int i=1; i<n/2; ++i ) c+=i;
		
		printf("%d\n", c);
	}
}
