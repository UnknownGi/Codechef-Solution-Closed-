#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; cin >> t;
	while( t-- ) {
		string a, b;
		cin >> a; cin >> b;
		
		int min=0, max=0;
		for (int i=0; i<a.length(); ++i) {
			if ( a[i] == '?' && b[i] == '?' ) ++max;
			else if ( a[i] == '?' && b[i] != '?' ) ++max;
			else if ( a[i] != '?' && b[i] == '?' ) ++max;
			else if ( a[i] != b[i] ) { ++max; ++min; }			
		}
		
		cout << min << " " << max << endl;
	}
}
