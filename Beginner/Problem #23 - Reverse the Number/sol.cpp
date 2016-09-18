#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n, r=0; scanf("%d", &n);
		while ( n != 0 ) {
			int rem = n%10;
			r = rem+(r*10);
			n = (n-rem)/10;	
		}
		
		printf("%d\n", r);
	}
}
