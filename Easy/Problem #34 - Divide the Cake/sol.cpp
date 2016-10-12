#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		if ( n>360 ) printf("n n n\n");
		else {
			if ( n<27 ) 
				360%n==0? printf("y y y\n") : printf("n y y\n");
			else 360%n==0? printf("y y n\n") : printf("n y n\n");
		}
	}
}
