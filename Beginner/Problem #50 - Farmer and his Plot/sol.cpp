#include<stdio.h>
using namespace std;

int gcd (int a, int b) { return b==0? a : gcd(b, a%b); }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int l, b;
		scanf("%d %d", &l, &b);
		
		int g = gcd(l, b);
		printf("%d\n", ((l/g)*(b/g)));
	}
}
