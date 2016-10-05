#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string s; cin >> s;
		
		bool d=false;
		int chef=0, opp=0, w;
		for ( int i=0; i<s.size(); ++i ) {
			s[i]=='1'? ++chef : ++opp;
			
			if ( !d ) {
				if ( chef==10 && opp==10 ) d=true;
				else if ( chef==11 ) { w=1; break; }
				else if ( opp==11 ) { w=0; break; }	
			} else if ( d ) {
				if ( chef-opp==2 ) { w=1; break; }
				else if ( opp-chef==2 ) { w=0; break; }	
			}
		}
		
		w==1? printf("WIN\n") : printf("LOSE\n");
	}
}
