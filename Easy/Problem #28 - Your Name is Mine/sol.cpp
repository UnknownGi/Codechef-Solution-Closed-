#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string a, b, larger, shorter;
		cin >> a >> b;
		
		if ( a.size() > b.size() )  { larger=a; shorter=b; }
		else { larger=b; shorter=a; }
		
		int j=0;
		bool match;
		REPN(i,0,shorter.size()) {
			match = false;
			for ( ; j<larger.size() && !match; ++j ) {
				if ( shorter[i]==larger[j] ) match=true;
			}
		}
		
		match? printf("YES\n") : printf("NO\n");
	}
}
