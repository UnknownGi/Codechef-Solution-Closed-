#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string a, b;
		cin >> a >> b;
		
		bool f = false;
		for ( int i=0; i<a.size() && !f; ++i ) {
			for ( int j=0; j<b.size() && !f; ++j ) {
				if ( a[i] == b[j] ) f = true;
			}
		}
		
		f? printf("Yes\n") : printf("No\n");
	}
}
