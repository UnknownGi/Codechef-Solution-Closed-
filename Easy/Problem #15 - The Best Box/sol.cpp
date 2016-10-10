#include<math.h>
#include<iomanip>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; cin >> t;
	while ( t-- ) {
		double P, S;
		cin >> P >> S;
		
		double a, b;
		b = (P/12)-sqrt(((P*P)/144)-(S/6));
		a = ((P/4))-2*b;
		
		cout << fixed << setprecision(2) << (a*b*b) << endl;
	}
}
