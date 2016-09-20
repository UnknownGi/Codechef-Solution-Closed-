#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		if ( n < 10 ) printf("What an obedient servant you are!\n");
		else printf("-1\n");
	}
}
