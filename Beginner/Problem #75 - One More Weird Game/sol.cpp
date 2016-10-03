#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, m;
		scanf("%d %d", &n, &m);
		
		int s=(2*n*m)-n-m;
		printf("%d\n", s);
	}
}
