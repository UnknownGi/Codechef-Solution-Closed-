#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	
	static int a, b, one, two, c, d;
	while ( t-- ) {
		scanf("%d %d", &a, &b);
		
		one += a;
		two += b;
		
		if ( one>two && c<one-two ) c = one-two;
		else if  ( two>one && d<two-one) d = two-one; 
	}
	
	if ( c >= d ) printf("1 %d", c);
	else printf("2 %d", d);
}
