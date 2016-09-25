#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; cin >> t;
	while ( t-- ) {
		string a;
		cin >> a;
		
		int m=0;
		bool found = false;
		
		if ( a.length()%2 == 0 ) { 
			for ( int i=0; i<a.length() && !false; ++i ) {
				char ch = a[i];
				for ( int j=0; j<a.length() && !false; ++j ) {
					if ( ch==a[j] ) ++m;
				}
				
				if ( m == a.length()/2 ) found = true;
				else m = 0;
			}
		}
		
		if ( found ) cout << "YES\n";
		else cout << "NO\n";
	}
}
