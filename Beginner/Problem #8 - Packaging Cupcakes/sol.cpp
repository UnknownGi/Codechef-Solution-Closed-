#include<math.h>
#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int n, t; scanf("%d", &t);
	while ( t-- ) {
		scanf("%d", &n);
		
		if ( n <= 2 ) printf("%d\n", n);
		else printf("%d\n", n/2+1);
	}
}
