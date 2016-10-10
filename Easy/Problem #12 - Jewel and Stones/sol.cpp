#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) { 
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string a, b;
		cin >> a >> b;
		
		int c=0;
		REPN(i,0,a.size()) {
			REPN(j, 0, b.size()) {
				if ( a[i]==b[j] ) {
					++c;
					b[j]='-';
				}
			}
		}
		
		printf("%d\n", c);
	}
}
