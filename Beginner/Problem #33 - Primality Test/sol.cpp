#include<math.h>
#include<stdio.h>
using namespace std;

bool ifPrime (int n) {
	if (n==2) return true;
	else if (n%2==0 || n==1) return false;
	
	for ( int i=3; i<=sqrt(n); i+=2 ) {
		if (n%i==0) return false;
	}
	
	return true;
}

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		if ( ifPrime(n) ) printf("yes\n");
		else printf("no\n");
	}
}
		
