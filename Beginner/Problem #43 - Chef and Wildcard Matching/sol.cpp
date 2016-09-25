#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; cin >> t;
	while ( t-- ) {
		string a, b;
		cin >> a; cin >> b;
		
		bool match = true;
		for ( int i=0; i<a.length() && match; ++i ) {
			if ( a[i] == '?' && b[i] == '?' ) continue;
			else if ( a[i] == '?' && b[i] != '?' ) continue;
			else if ( a[i] != '?' && b[i] == '?' ) continue;
			else if ( a[i] == b[i] ) continue;
			else match = false;	
		}
		
		if ( match ) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
