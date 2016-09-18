#include<deque>
#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string exp; cin >> exp;
		
		deque<string> a, b;
		for ( int i=exp.size()-1; i>=0; --i ) {
			if ( exp[i] == '(' ) {
				string x = a.back(); a.pop_back();
				string y = a.back(); a.pop_back();
				
				string z = b.back(); b.pop_back();
				
				string n = x+y+z;
				a.push_back(n);
			} else if ( isalpha(exp[i]) ) { string t; t+=exp[i]; a.push_back(t); }
			else if ( exp[i] == '+' || exp[i] == '*' || exp[i] == '/' || exp[i] == '-' || exp[i] == '^' ) { string t; t+=exp[i]; b.push_back(t); }
		}
		
		printf("%s\n", a[0].c_str());
	}
}
