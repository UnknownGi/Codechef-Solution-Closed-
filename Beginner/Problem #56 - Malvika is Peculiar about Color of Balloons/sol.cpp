#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string str;
		cin >> str;
		
		int a=0, b=0;
		for ( int i=0; i<str.length(); ++i ) {
			str[i]=='a'? ++a : ++b;
		}
		
		a<b? printf("%d\n", a) : printf("%d\n", b);
	}
}
