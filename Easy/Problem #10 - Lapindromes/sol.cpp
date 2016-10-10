#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string str; cin >> str;
		
		int a[26], b[26];
		REPN(i,0,26) { a[i]=0; b[i]=0; }
		
		for ( int i=0, j=str.size()-1; i<str.size()/2; ++i, --j ) {
			a[str[i]-'a']++;
			b[str[j]-'a']++;
		}
		
		bool f=true;
		REPN(i,0,26) {
			if ( a[i]!=b[i] ) {
				f=false;
				break;
			}
		}
		
		f? printf("YES\n") : printf("NO\n");
	}
}
