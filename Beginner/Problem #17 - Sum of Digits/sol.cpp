#include<stdio.h>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, sum=0; scanf("%d", &n);
		while ( n != 0 ) {
			int rem = n%10;
			n = (n-rem)/10;
			sum += rem;
		}
		
		printf("%d\n", sum);
	}
}
