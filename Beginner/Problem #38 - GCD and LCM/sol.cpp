#include<stdio.h>
using namespace std;

int gcd (int a, int b) { return b==0? a : gcd(b, a%b); }

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int a, b; 
		scanf("%d %d", &a, &b);
		
		int g = gcd(a,b);
		int l = (a*b)/g;
		
		printf("%d %d\n", g, l);
	}
}
