#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; cin >> t;
	while ( t-- ) { 
		string s, o;
		cin >> s;
		
		int bal=0, max=0;
		for ( int i=0; i<s.length(); ++i ) {
			if ( s[i] == '(' ) ++bal;
			else if ( s[i] == ')' ) --bal;
			
			if ( bal > max ) max = bal;
		}
		
		for ( int i=1; i<=max; ++i ) o += '(';
		for ( int i=1; i<=max; ++i ) o += ')';
		
		cout << o << endl;
	}
}
