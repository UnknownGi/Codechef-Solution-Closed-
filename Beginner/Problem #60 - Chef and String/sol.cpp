#include<iostream>
#define REP(i,a,b) for(int i=a; i<=b; ++i)
using namespace std;

int main ( ) {
	freopen("inputB.txt", "r", stdin);
	
	string s;
	cin >> s;
	
	int c=0, h=0, e=0, f=0;
	REP(i, 0, s.size()-1) {
		if ( s[i]=='C' ) ++c;
		else if ( s[i]=='H' && c>h ) ++h;
		else if ( s[i]=='E' && h>e ) ++e;
		else if ( s[i]=='F' && e>f ) ++f;		
	}
		
	cout << f << endl;
}
