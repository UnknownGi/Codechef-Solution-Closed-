#include<stdio.h>
#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string s; cin >> s;
		
		if (s[0]==s[1]) printf("NO\n");
		else {
			bool f=true;
			char a=s[0], b=s[1], m=a;
			REPN(i,0,s.size()) {
				if ( s[i]==m ) { 
					m==a? m=b : m=a;
					continue;
				} else { f=false; break; }
			}
			
			f? printf("YES\n") : printf("NO\n");	
		}
	}
}
