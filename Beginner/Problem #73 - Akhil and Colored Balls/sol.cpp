#include<iostream>
#define REPN(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; cin >> t;
	while ( t-- ) {
		string a, b, c="";
		cin >> a >> b;
		
		REPN(i, 0, a.size()) {
			if ( a[i]=='W' && b[i]=='W' ) c+='B';
			else if ( a[i]=='B' && b[i]=='B' ) c+='W';
			else if ( a[i]=='B' && b[i]=='W' ) c+='B';
			else if ( a[i]=='W' && b[i]=='B' ) c+='B';	
		}
		
		cout << c << endl;
	}
}
