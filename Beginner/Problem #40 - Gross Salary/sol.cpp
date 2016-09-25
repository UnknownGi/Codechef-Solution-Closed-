#include<iostream>
#include<ctype.h>
using namespace std;

int main( ) {
	int t; cin >> t;
	
	while ( t-- ) {
	    float b, gs, ds, hr;
	    cin >> b;
	    if( b < 1500 ) {
            ds = b*0.90;
            hr = b*0.10;
            gs = b+ds+hr;
            cout << gs << "\n";
		} else {
            ds = b*0.98;
            hr = 500;
            gs = b+ds+hr;
            cout << gs << "\n";
        }
	}
}
