#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		int n; scanf("%d", &n);
		
		string s; cin >> s;
		REPN(i,0,n) {
			if ( s[i]=='1' ) {
				s[i-1] = '2';
				if ( s[i+1]=='0' ) s[i+1] = '2';
			}
		}
		
		int c=0;
		REPN(i,0,n) {
			if ( s[i]=='0' ) ++c;
		}
		
		printf("%d\n", c);
	}
}
