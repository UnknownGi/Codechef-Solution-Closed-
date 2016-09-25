#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int n; scanf("%d", &n);
	
	int m=0;
	for ( int i=0; i<n; ++i ) {
		int a; scanf("%d", &a);
		if ( a%2 == 0 ) ++m;
	}
	
	if ( m > n/2 ) printf("READY FOR BATTLE\n");
	else printf("NOT READY\n");
}
