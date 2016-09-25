#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		if ( a == b ) printf("=\n");
		else if ( a > b ) printf(">\n");
		else printf("<\n");
	}
}
