#include<math.h>
#include<stdio.h>
using namespace std;

int s;
int change ( int a ) {
	if ( (a&(a-1))==0 ) return a;
	else { 
		++s;
		a%2==0? change(a/2) : change((a-1)/2);
	}
}

void check ( int a, int b ) {
	int x;
	a>b? x=a/b : x=b/a;
	while ( x > 1 ) {
		x/=2;
		++s;
	}
}

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int a, b;
		scanf("%d %d", &a, &b);
		
		s=0;
		
		a = change(a);
		check(a, b);
		
		printf("%d\n", s);
	}
}
