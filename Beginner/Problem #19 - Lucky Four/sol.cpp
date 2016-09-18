#include<stdio.h>
#include<iostream>
using namespace std;

int main ( ) {
	freopen("input.txt", "r", stdin);
	
	int t; scanf("%d", &t);
	while ( t-- ) {
		string str; cin >> str;
		
		int count = 0;
		for ( int i=0; i<str.size(); ++i ) {
			if ( str[i] == '4' ) ++count;
		}
		
		printf("%d\n", count);
	}
}
